/*Se citeste un numar natural sa se afiseze cea de a p cifra.
(numarul are cel putin p cifre)
*/
#include <iostream>

using namespace std;

int cifre(long long int n) //calculeaza numarul de cifre din n
{
    if (n==0)
        return 1;
    int i=0;
    while (n!=0)
    {
        n=n/10;
        i++;
    }
    return i;
}

int main()
{
    long long int n,ogl;
    int p;
    cout<<"n=";cin>>n;
    cout<<"cea de a p cifra";cin>>p;
    int nr_cifre = cifre(n);
    //calculam oglinditul lui n
    while(n!=0)
    {   int x=n%10;
        ogl=ogl*10+x;
        n=n/10;
    }
    //cautam cifra de pe pozitia aleasa ajutandu-ne de oglindit
    if((p>=1)&&(p<=nr_cifre))
    {
        int c;
        for(int i=1;i<=p;i++)
        {
            c=ogl%10;
            ogl=ogl/10;
        }
        cout<<"cifra de pe pozitia "<<p<<" este "<<c;
    }
    else
    {
        cout<<"pozitia "<<p<<" nu este valida pentru numarul "<<n;
    }
    return 0;
}
