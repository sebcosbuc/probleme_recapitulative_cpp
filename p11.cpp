/*Sa se determine suma si produsul a doua fractii*/
#include <iostream>

int cmmdc(int n1,int n2)//cel mai mare divizor comun
{
    while(n2!=0)
    {
        int r=n1%n2;
        n1=n2;
        n2=r;
    }
    return n1;
}
float suma(int m1,int n1,int m2,int n2)
    {
        int numitor_comun=(n1*n2)/cmmdc(n1,n2);
        float suma_numarator=(float)(m1*(numitor_comun/n1))+(m2*(numitor_comun/n2));
        return suma_numarator/numitor_comun;
    }
float produs(int m1,int n1,int m2,int n2)
    {
        return float(m1*m2)/(n1*n2);
    }

using namespace std;

int main()
{
    int m1,n1,m2,n2;
    cout<<"numarator 1=";cin>>m1;
    cout<<"numitor 1=";cin>>n1;
    cout<<"numarator 2=";cin>>m2;
    cout<<"numitor 2=";cin>>n2;
    cout<<endl;
    cout<<"suma fractiei ="<<suma(m1,n1,m2,n2);
    cout<<endl;
    cout<<"produsul fractiei ="<<produs(m1,n1,m2,n2);
    return 0;
}
