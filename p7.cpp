/*Sa se determine suma cuburilor cifrelor unui nr de cel mult 3 cifre*/
#include <iostream>
using namespace std;

int main()
{
    int n,s=0,c;
    cin>>n;
    if(n<=999)
    {
        while(n>0)
        {
            c=n%10;
            c=c*c*c;
            s=s+c;
            n=n/10;
        }
        cout<<s;
    }
    else
    {
        cout<<"numar invalid";
    }
    return 0;
}
