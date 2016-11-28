#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char alfabet[27];
    char wyraz[201];
    int dlugosc;
    for(int i=0;i<26;i++)alfabet[i]=65+i;

    while(cin.getline(wyraz,201))
    {
        dlugosc=strlen(wyraz);
        for(int i=0;i<dlugosc;i++)
        {
            for(int j=0;j<27;j++)
            {
                if(j<23)
                {
                if(wyraz[i]==alfabet[j])
                {
                wyraz[i]=alfabet[j+3];
                j=27;
                }
                }
                else if(wyraz[i]=='X')wyraz[i]='A';
                else if(wyraz[i]=='Y')wyraz[i]='B';
                else if(wyraz[i]=='Z')wyraz[i]='C';

            }

        }
        cout<<wyraz<<endl;
        wyraz[0]=0;
    }

        return 0;
        }






