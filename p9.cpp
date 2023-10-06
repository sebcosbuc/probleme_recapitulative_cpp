/*Sa se determine distanta dintre doua puncte.
  Se cunosc coordonatele celor doua puncte.*/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x1,x2,y1,y2,d;
    cout<<"coordonatele primului punct=";cin>>x1>>y1;
    cout<<"coordonatele celui de al doilea punct=";cin>>x2>>y2;
    d=sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout<<"distanta dintre cele 2 puncte="<<d;
    return 0;
}
