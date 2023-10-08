/*Fie doi vectori x si y, de marime n.
  Sa se calculeze:
a. E=(x1+y1)* (x2+y2)* ......*(xn+yn)
b. E=x1y1+ x2y2 +......+xnyn
c. E=min(x1,y1)+min(x2,y2)+ ......min(xn,yn)
d. E=min(x1,yn)+min(x2,yn-1)+ ......min(xn,y1)*/
#include <iostream>

using namespace std;

int main()
{
    int n,i,e1=1,e2=0,e3=0,e4=0,min_e3=0,min_e4=0;
    cin>>n;
    int x[n],y[n];
    for (i=1;i<=n;i++)
    {
        cout<<"x["<<i<<"]=";cin>>x[i];
    }
    for (i=1;i<=n;i++)
    {
        cout<<"y["<<i<<"]=";cin>>y[i];
    }
    for (i=1;i<=n;i++)
    {
        e1=e1*(x[i]+y[i]);
    }
    cout<<e1<<endl;
    for (i=1;i<=n;i++)
    {
        e2=e2+(x[i]*y[i]);
    }
    cout<<e2<<endl;
    for (i=1;i<=n;i++)
    {
        if(x[i]<y[i])
            min_e3=x[i];
        else
            min_e3=y[i];
        e3=e3+min_e3;
    }
    cout<<e3<<endl;
    //e4 gresit!!! nu ia in calcul si ultima valoare.
    for (i=0;i<n;i++)
    {
        if(x[i]<y[n-1-i])
            min_e4=x[i];
        else
            min_e4=y[n-1-i];
        e4=e4+min_e4;
    }
    cout<<e4;
    return 0;
}
