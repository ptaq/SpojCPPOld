#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   int ile;
   double wynik,calkow,ulamek,a,b;

   cin>>ile;

   while(ile--)
   {
      cin>>a>>b;
      if(a-1==0)cout<<"TAK"<<endl;
      else
      {
      wynik=b/(a-1);
      if(wynik<0)cout<<"TAK"<<endl;
      else
      {


      ulamek=modf(wynik,&calkow);
      cout<<ulamek<<" "<<calkow<<endl;
      if(ulamek!=0&&calkow>=1)cout<<"TAK"<<endl;
      else if(ulamek==0&&calkow>=1)cout<<"NIE"<<endl;
      else cout<<"NIE"<<endl;
      }
      }
   }

    return 0;

}
