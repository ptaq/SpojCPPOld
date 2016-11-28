#include <iostream>
#include <cstring>
#include <string>

using namespace std;


int main()
{
    string wyraz;
    int slowa;
    int liczby,dlugosc;
    while(getline(cin,wyraz))
    {
        slowa=0;
        liczby=0;
        dlugosc=wyraz.length();

    for(int i=0;i<dlugosc;i++)
    {
        if(isalpha(int(wyraz[i]))!=0)
        {
            slowa++;
            while(wyraz[i]!=' '&&i!=dlugosc)
            {
                i++;
            }
        }
        if(isdigit(int(wyraz[i]))!=0)
        {
            liczby++;
            while(wyraz[i]!=' '&&i!=dlugosc)
            {
                i++;
            }
        }
    }
   cout<<liczby<<" "<<slowa<<endl;
   wyraz.clear();
    }

    return 0;

}
