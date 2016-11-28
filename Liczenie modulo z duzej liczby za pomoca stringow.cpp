#include <iostream>

using namespace std;

int main()
{
  int ile =1000;
  string liczba;
  int wynik;



   while(ile--)
   {
       wynik=0;
      cin>>liczba;
      if(liczba=="0")break;
      for (int i = 0; i < liczba.length(); i++)
            {
            wynik = wynik*10 + liczba[i]-'0';
            wynik = wynik%15;
            }
           if(wynik==0)cout<<"TAK"<<endl;
           else cout<<"NIE"<<endl;

   }
return 0;
}






