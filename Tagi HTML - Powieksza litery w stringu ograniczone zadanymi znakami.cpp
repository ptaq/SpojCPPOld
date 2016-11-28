#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
  string wyraz,wyraz2;
  int doo=0;
  int pierwszy;

  while(getline(cin,wyraz))
  {
      doo=0;
     for(int i=0;i<wyraz.length();i++)
     {

         if(wyraz[i]=='<')
            {
                pierwszy=i+1;
               for(int j=i+1;j<wyraz.length()&&wyraz[j]!='>';j++)
               {
                   doo=j;
               }
               wyraz2= wyraz.substr(pierwszy,doo);
               transform(wyraz2.begin(), wyraz2.end(), wyraz2.begin(), ::toupper);
               wyraz.replace(pierwszy,wyraz2.length(),wyraz2);
            }
     }
            cout<<wyraz<<endl;

     }

return 0;
  }

