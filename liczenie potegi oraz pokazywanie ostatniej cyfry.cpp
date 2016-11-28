#include <iostream>
#include <math.h>
#include <string>
#include <sstream>

using namespace std;

int main()
{
 int M,pomoc;
 long  liczba,wykladnik,wynik;

 string wyraz;
 ostringstream ss;
 cin>>M;
for(int i=1;i<=M;i++)
{
 cin>>liczba>>wykladnik;
 wynik=pow(liczba,wykladnik);

 ss<<wynik;
 wyraz=ss.str();
 pomoc=wyraz.length();
 cout<<wynik<<endl;
 cout<<endl;
 cout<<wyraz[pomoc-1]<<endl;
}

return 0;
 }


