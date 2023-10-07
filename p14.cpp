/*Fie n numere naturale date.
Sa se afiseze acelea dintre ele care sunt prime.*/
#include <iostream>

using namespace std;

int main()
{
    int n,i,j;
    bool prim;
    cin>>n;
    int v[n];
    for(i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";cin>>v[i];
    }
    for (i=1;i<=n;i++)
    {
        prim = true;
        if(v[i]<=1)
            prim = false;
        if(v[i]==2)
            prim = true;
        for (j=2;j<=v[i]/2;j++)
        {
          if (v[i]%j==0)
          {
            prim = false;
          }
        }
    if(prim)
        cout<<v[i]<<" ";
    }
    return 0;
}
