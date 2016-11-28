#include <iostream>

using namespace std;
unsigned long NWD(unsigned long a, unsigned long b)
{
    unsigned long pom;
    while(b!=0)
    {
        pom =b;
        b=a%b;
        a=pom;
    }
    cout<<a<<endl;
}
int main()
{
unsigned a,b,t;
cin>>t;
while(t--)
{
    cin>>a>>b;
    NWD(a,b);
}
  return 0;
}

