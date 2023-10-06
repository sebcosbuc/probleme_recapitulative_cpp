/*Se dau coordonatele a 3 puncte in plan.
  Sa se determine aria si perimetrul triunghiului determinat de cele 3 puncte.*/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x1,x2,x3,y1,y2,y3,sp,a,p,l1,l2,l3;
    cout<<"coordonatele primului punct=";cin>>x1>>y1;
    cout<<"coordonatele celui de al doilea punct=";cin>>x2>>y2;
    cout<<"coordonatele celui de al treilea punct=";cin>>x3>>y3;
    l1=sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    l2=sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    l3=sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
    cout<<"lungimea laturii 1="<<l1;
    cout<<"lungimea laturii 2="<<l2;
    cout<<"lungimea laturii 3="<<l3;
    sp=(l1+l2+l3)/2;//calculam semiperimetrul pentru a-l folosi la arie
    a=sqrt(sp*(sp-l1)*(sp-l2)*(sp-l3));//formula lui Heron
    p=l1+l2+l3;
    cout<<"aria ="<<a;
    cout<<"perimetrul ="<<p;
    return 0;
}
