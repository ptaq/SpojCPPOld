#include <iostream>
#include <iomanip>


using namespace std;


int main()
{
  double a,b,c,wynik;
  cin>>a>>b>>c;
  if(a==0&&c+(-b)==0)cout<<"NWR";
  else if(a==0&&(c+(-b)!=0))cout<<"BR";
  else
  {
  wynik=(c+(-b))/a;
  cout<<fixed<<setprecision(2)<<wynik;
  }


    return 0;
}
