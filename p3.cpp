/*Se citeste un numar format din 5 cifre.
  Sa se elimine cifra din mijloc
*/
#include <iostream>

using namespace std;

int main()
{
    int n,c1,c2,c4,c5,nr_nou;
    cout<<"n=";cin>>n;
    c1=n/10000;
    c2=(n/1000)%10;
    c4=(n/10)%10;
    c5=n%10;
    if((n>=10000)&&(n<=99999))
    {
        nr_nou=c1*1000+c2*100+c4*10+c5;
        cout<<"numarul format prin eliminarea cifrei din mijloc este=";
        cout<<nr_nou;
    }
    else
    {
        cout<<"numarul nu are 5 cifre";
    }
    return 0;
}
