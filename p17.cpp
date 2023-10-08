/*Sa se ordoneze crescator / descrescator un vector*/
#include <iostream>

using namespace std;

int main()
{
    int n,i,j,x;
    cin>>n;
    int v[n];
    for(i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";cin>>v[i];
    }
    for(i=1;i<n;i++)
    {
            for(j=i+1;j<=n;j++)
        {
                if(v[i]>v[j])
                {
                    x=v[i];
                    v[i]=v[j];
                    v[j]=x;
                }
        }
    }
    cout<<"vectorul sortat crescator este ";
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
    for(i=1;i<n;i++)
    {
            for(j=i+1;j<=n;j++)
        {
                if(v[i]<v[j])
                {
                    x=v[i];
                    v[i]=v[j];
                    v[j]=x;
                }
        }
    }
    cout<<"vectorul sortat descrescator este ";
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
    return 0;
}
