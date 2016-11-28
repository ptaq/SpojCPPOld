#include <iostream>

using namespace std;


int main()
{
    int a,b;
    int ile;

    cin>>ile;
    while(ile--)
    {
        cin>>a>>b;
        while(a!=b)
        {
            a>b?a-=b:b-=a;
        }
        cout<<a+b<<endl;
    }

  return 0;
}



