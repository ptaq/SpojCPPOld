#include <iostream>

using namespace std;

int NWD(int a, int b)
{
  int pom;

    while(b!=0)
  {
      pom = b;
      b = a%b;
      a = pom;
    }
    return a;
}
int main()
{
  int ile,a,b;

  cin>>ile;

  while(ile--)
  {
   cin>>a>>b;
   cout<<a/NWD(a, b)*b<<endl;

  }
    return 0;
}
