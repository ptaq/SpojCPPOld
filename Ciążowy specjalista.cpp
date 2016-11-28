#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int ile;
    double x,y,z,wynik;

    cin>>ile;
    while(ile--)
    {

      cin>>x>>y>>z;


      wynik=round((((x+y)-(z*y))/(z-1))*12);
      if(wynik<=0)wynik=-wynik;

      cout<<wynik<<endl;
    }


  return 0;
}
