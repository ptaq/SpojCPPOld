#include <iostream>
#include <sstream>
#include <cstdlib> //atoi

using namespace std;

int main()
{
  ostringstream ss;
  int razy =0;
  int ile,suma;
  string liczba;
  string liczba2;
  int a,b;
cin>>ile;
while(ile--)
{

    cin>>liczba;
    a=1;
    b=2;
    razy=0;
    while(a!=b)
    {


    liczba2=string(liczba.rbegin(),liczba.rend());  //zmienienie kolejnosci liczby

    a=atoi(liczba.c_str());             //zamiana stringa na inta
    b=atoi(liczba2.c_str());

    if(a==b)cout<<a<<" "<<razy<<endl;
    else
    {
        suma=a+b;
        ss<<suma;
        liczba=ss.str();
        ss.str( "" );                                //czysci bufor
        razy++;
    }
    }

}
return 0;
}
