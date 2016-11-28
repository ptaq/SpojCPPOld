#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
char wyraz[100];
char liczba[100];
int dlugosc;
int znak;
int j,a,ile;
int suma;


cin>>ile;
while(ile--)
{
cin>>wyraz;

znak=0;
suma=0;
dlugosc=strlen(wyraz);
for(int i=0;i<dlugosc;i++)
{
    j=0;

    if(wyraz[i]=='-')znak=1;
    else if(wyraz[i]=='+')znak=2;
    else
    {


        while((wyraz[i]!='-')&&(wyraz[i]!='+')&&(j<dlugosc))
        {

            liczba[j]=wyraz[i];
            j++;
            i++;

        }
        a=atoi(liczba);


        if(znak==1)suma=suma-a;
        else suma=a+suma;
        i--;

    }
    liczba[0]=0;



 }
 cout<<suma<<endl;
 wyraz[0]=0;
}

return 0;
}
















