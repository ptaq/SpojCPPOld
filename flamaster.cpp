#include <iostream>

using namespace std;

int main()
{
  int ile,dlugosc;
  int i=1;
  int razy =0;
  string wyraz;

  cin>>ile;
  while(ile>=i)
  {
      cin>>wyraz;
      dlugosc=wyraz.length();
      for(int j=0;j<dlugosc;j++)
      {
        if(razy==0)cout<<wyraz[j];
        if(wyraz[j]==wyraz[j+1])
        {
            razy++;
        }
        else if(wyraz[j]!=wyraz[j+1])
        {
            if(razy==1)cout<<wyraz[j];
            if(razy>1)
            {

            cout<<razy+1;

            }
            razy=0;

        }
      }
      cout<<endl;

      i++;
  }
  return 0;
}


