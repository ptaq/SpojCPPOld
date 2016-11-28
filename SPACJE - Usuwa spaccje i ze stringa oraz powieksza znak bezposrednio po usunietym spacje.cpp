#include <iostream>
#include <algorithm>
#include <string>


using namespace std;

int main()

{
    string wyraz;
    string zamiana;

    while(getline(cin,wyraz))
    {

    for(int i=0;i<wyraz.length()-1;i++)
    {
     if(wyraz[i]==' ')
     {
         wyraz.erase(i,1);
         zamiana=wyraz[i];
         transform(zamiana.begin(), zamiana.end(), zamiana.begin(), ::toupper);
         wyraz.replace(i,1,zamiana);
         i--;
     }
    }
cout<<wyraz;
cout<<endl;
    }


    return 0;
}
