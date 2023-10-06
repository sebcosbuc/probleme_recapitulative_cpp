/* Se citeste un numar format din 3 cifre.
   Sa se interschimbe cifra unitatilor cu a sutelor
*/
#include <iostream>

using namespace std;

int main()
{
    int n,u,z,s,nr_nou;
    cout<<"n=";cin>>n;
    u=n%10;
    z=(n/10)%10;
    s=n/100;
    if((n>=100)&&(n<=999))
    {
        cout<<"cifra unitatilor="<<u<<endl;
        cout<<"cifra zecilor="<<z<<endl;
        cout<<"cifra sutelor="<<s<<endl;
        nr_nou=u*100+z*10+s;
        cout<<"numarul format prin interschimbarea cifrelor unitatilor cu a sutelor=";
        cout<<nr_nou;
    }
    else
    {
        cout<<"numarul nu are 3 cifre";
    }
    return 0;
}
