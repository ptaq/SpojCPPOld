#include <iostream>

using namespace std;

int main ()
{
string wyraz;
int ile;

int ii=0;
int du=1;
int tab[53]={0};
int dlugosc;

int znak[53]={97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,
65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,32};

do
{ cout<<"\t"<<ile<<endl;
  cin>>ile;
}while(ile>150);



while(du<=ile)
{

        cin.ignore();
     getline(cin,wyraz);
     dlugosc=wyraz.length();

     for(int i=0;i<dlugosc;i++)
     {
         ii=0;
         for(int j=0;(j<53&&ii==0);j++)
         {
             if(wyraz[i]==znak[j])
             {
                 tab[j]++;
                 ii=1;
             }
         }
     }
du++;
}


for(int i=0;i<53;i++)
{
    if(tab[i]!=0)cout<<char(znak[i])<<" "<<tab[i]<<endl;
}

return 0;
}

