/*Se citesc lungimea si latimea unui dreptunghi.
  Sa se determine aria si perimetrul*/
#include <iostream>

using namespace std;

int main()
{
    int lungime,latime,a,p;
    cin>>lungime;
    cin>>latime;
    a=lungime*latime;
    p=2*(lungime+latime);
    cout<<"aria="<<a<<endl;
    cout<<"perimetrul="<<p;
    return 0;
}
