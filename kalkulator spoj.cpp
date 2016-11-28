#include <iostream>


using namespace std;

int main()
{
char sterowanie;
int a,b;

while(cin>>sterowanie>>a>>b)
{
   switch( sterowanie )
{
case '+':
     cout<<a+b<<endl;
    break;

case '-':
    cout<<a-b<<endl;
    break;
case '*':
    cout<<a*b<<endl;
    break;
case '/':
    cout<<a/b<<endl;
    break;
case '%':
    cout<<a%b<<endl;
    break;
}

}
  return 0;
}
