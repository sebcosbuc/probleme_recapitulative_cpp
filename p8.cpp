/*Sa se determine suma valorilor 1+2+3+…+n, pt un n natural citit*/
#include <iostream>

using namespace std;

int main()
{
    int n,s=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        s=s+i;
    }
    cout<<s;
    return 0;
}
