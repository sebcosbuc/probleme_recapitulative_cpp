/*Se citeste un sir de n numere intregi, n dat.
Sa se numere elementele pozitive si pare.
Calculati produsul elementelor negative.
Sa se calculeze media aritmetica a elementelor pozitive din vector.*/
#include <iostream>

using namespace std;

int main()
{
    int n,v[100],i,x=0,p,s=0,j=0;
    float ma;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"["<<i<<"]=";cin>>v[i];
    }
    for(i=1;i<=n;i++)
    {
        if((v[i]%2==0)&&(v[i]>0))
        {
            x++;
        }
    }
    for(i=1;i<=n;i++)
    {
        if(v[i]<0)
        {
            p=1;
            p=p*v[i];
        }
        else
        {
            p=0;
        }
    }
    for(i=1;i<=n;i++)
    {
        if(v[i]>0)
        {
            s=s+v[i];
            j++;
        }
    }
    ma=(float)s/j;
    cout<<"in sir exista "<<x<<" elemente pozitive si pare"<<endl;
    cout<<"produsul elementelor negative ="<<p<<endl;
    cout<<"media aritmetica a elementelor pozitive din vector ="<<ma;
    return 0;
}
