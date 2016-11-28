#include <iostream>


using namespace std;

int main()

{
    int ile;
    int *tab;
    double *tab2;
    double srednia,wynik;
    int n;

    cin>>ile;

    while(ile--)
    {
        srednia=0;
       cin>>n;
       tab=new int[n];
     for(int i=0;i<n;i++)
     {
         cin>>tab[i];
         srednia=tab[i]+srednia;
     }
     srednia=srednia/n;

     int ktora=0;
     tab2=new double[n];
     for(int i=0;i<n;i++)
     {
         wynik=srednia-tab[i];
         if(wynik<0)wynik=-wynik;
         tab2[i]=wynik;
     }
     double najmniejsza=tab2[0];
     for(int i=0;i<n;i++)
     {

         if(najmniejsza>tab2[i])
         {

             najmniejsza=tab2[i];
             ktora=i;
         }
     }
     cout<<tab[ktora]<<endl;
     delete[]tab;
     delete[]tab2;

    }


return 0;
}
