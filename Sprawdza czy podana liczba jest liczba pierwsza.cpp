#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int ile;
  int liczba,j;
  int i=1;
  int pierwiastek;

  cin>>ile;
  while(ile>=i)
  {
      cin>>liczba;
      if(liczba>1)
      {
      pierwiastek=sqrt(liczba);
      for(j=pierwiastek;j>1;j--)
      {
          if(liczba%j==0)
          {
              cout<<"NIE"<<endl;
              j=0;
          }
      }
      if(j>0)cout<<"TAK"<<endl;
      }else cout<<"NIE"<<endl;
      i++;
  }
  return 0;
}
