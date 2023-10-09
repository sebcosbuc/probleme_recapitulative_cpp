/*Determinarea maximului / minimului unui vector si afisarea pozitiilor pe care apar.*/
#include <iostream>

using namespace std;

int main()
{
    int n,i,maxim,minim,p_max,p_min;
    cin>>n;
    int v[n];
    minim=INT_MAX;
    for(i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";cin>>v[i];
    }
    for(i=1;i<=n;i++)
    {
        if(v[i]>maxim)
        {
            maxim=v[i];
            p_max=i;
        }
        if(v[i]<minim)
        {
            minim=v[i];
            p_min=i;
        }
    }
    cout<<"maximul este ="<<maxim<<endl;
    cout<<"pozitia maximului este ="<<p_max<<endl;
    cout<<"minimul este ="<<minim<<endl;
    cout<<"pozitia minimului este ="<<p_min;
    return 0;
}
