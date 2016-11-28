#include <iostream>


using namespace std;


int main()
{
    string wyraz;
    int dlugosc;
    while(getline(cin,wyraz))
    {
        dlugosc=wyraz.length();

        for(int i=0;i<dlugosc-2;i++)
        {

            if((wyraz[i]=='?')&&(wyraz[i+1]=='?'))
            {
                if(wyraz[i+2]=='=')wyraz.replace(i,3,"#");
                else if(wyraz[i+2]=='/')wyraz.replace(i,3,"\\");
                else if(wyraz[i+2]=='\'')wyraz.replace(i,3,"^");
                else if(wyraz[i+2]=='(')wyraz.replace(i,3,"[");
                else if(wyraz[i+2]==')')wyraz.replace(i,3,"]");
                else if(wyraz[i+2]=='!')wyraz.replace(i,3,"|");
                else if(wyraz[i+2]=='<')wyraz.replace(i,3,"{");
                else if(wyraz[i+2]=='>')wyraz.replace(i,3,"}");
                else if(wyraz[i+2]=='-')wyraz.replace(i,3,"~");


            }
        }
        cout<<wyraz<<endl;

    }

    return 0;

}










