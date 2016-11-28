#include <iostream>

using namespace std;

int main()
{
  int ile,x,y,n;

  cin>>ile;
  while(ile--)
  {
      cin>>n>>x>>y;
      for(int i=0;i<n;i++)if(i%x==0&&i%y>0)cout<<i<<" ";
      cout<<endl;
  }
    return 0;
}
