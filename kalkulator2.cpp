#include <iostream>

using namespace std;

int main()
{
int tab[10]={};
char symbol;
int wartosc,rejestr;
while(cin>>symbol>>rejestr>>wartosc)
{
   if(symbol=='+')
        cout<<tab[rejestr]+tab[wartosc]<<endl;
   if(symbol=='-')
        cout<<tab[rejestr]-tab[wartosc]<<endl;
   if(symbol=='*')
        cout<<tab[rejestr]*tab[wartosc]<<endl;
   if(symbol=='/')
        cout<<tab[rejestr]/tab[wartosc]<<endl;
   if(symbol=='%')
        cout<<tab[rejestr]%tab[wartosc]<<endl;
   if(symbol=='z')tab[rejestr]=wartosc;
}
 return 0;

}


