/*Sa se interschimbe continutul a doua variabile intregi. 
  Valorile initiale se citesc de la tastatura*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b;
    return 0;
}
