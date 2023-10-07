/*Sa se afiseze si sa se numere
 elementele pare de pe pozitiile impare ale unui vector.*/
#include <iostream>

using namespace std;

int main()
{
    int n,i,k=0;
    cin>>n;
    int v[n];
    for(i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";cin>>v[i];
    }
    cout<<"elementele pare de pe pozitiile impare sunt: ";
    for(i=1;i<=n;i++)
    {
        if((i%2!=0)&&(v[i]%2==0))
        {
            k++;
            cout<<v[i]<<" ";
        }
    }
    cout<<endl;
    cout<<"in total sunt "<<k<<" elemente pare pe pozitiile impare";
    return 0;
}
