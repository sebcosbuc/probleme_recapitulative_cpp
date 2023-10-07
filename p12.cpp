/*Se citeste un vector cu n componente numere intregi.
Sa se calculeze media aritmetica a componentelor vectorului.*/
#include <iostream>

using namespace std;

int main()
{
    int n,i,v[100],s=0;
    float ma;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"["<<i<<"]=";cin>>v[i];
        s=s+v[i];
    }
    ma=(float)s/n;
    cout<<ma;
    return 0;
}
