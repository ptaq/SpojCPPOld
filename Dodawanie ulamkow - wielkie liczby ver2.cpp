#include <iostream>

using namespace std;

unsigned long long NWD(unsigned long long x, unsigned long long y);
int main()
{

    unsigned long long i=0,pomoc;
    unsigned long long licz1,licz2,mian1,mian2,wynik,wspolny,a,b,a1,b1;
    char z;


    cin>>a>>z>>b;
    cin>>a1>>z>>b1;
    licz1=a;
    mian1=b;
    licz2=a1;
    mian2=b1;
    pomoc=NWD(licz1,mian1);
    if(pomoc!=1)
    {
        licz1=licz1/pomoc;
        mian1=mian1/pomoc;
    }
    pomoc=NWD(licz2,mian2);
    if(pomoc!=1)
    {
        licz2=licz2/pomoc;
        mian2=mian2/pomoc;
    }

    wspolny=mian1*mian2;
    licz1=(wspolny/mian1)*licz1;
    licz2=(wspolny/mian2)*licz2;
    wynik=licz1+licz2;
    NWD(wynik,wspolny);

    pomoc=NWD(wynik,wspolny);
    if(pomoc!=1)cout<<a<<z<<b<<" + "<<a1<<z<<b1<<" = "<<wynik/pomoc<<'/'<<wspolny/pomoc<<endl;
    else cout<<a<<z<<b<<" + "<<a1<<z<<b1<<" = "<<wynik<<'/'<<wspolny<<endl;

    return 0;
}
unsigned long long NWD(unsigned long long x, unsigned long long y)
{
    unsigned long long  pom;
    while(y!=0)
    {
        pom =y;
        y=x%y;
        x=pom;
    }

    return x;
}
