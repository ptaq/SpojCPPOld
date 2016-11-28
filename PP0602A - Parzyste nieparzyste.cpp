#include <iostream>


using namespace std;

int main()
{
   int ile;
   cin>>ile;
   int *tab;
   int h;
   int pozycja;

   while(ile--)
   {
     cin>>h;
     tab=new int[h];

     for(int i=0;i<h;i++)
     {
         cin>>tab[i];
         pozycja=i+1;
         if(pozycja%2==0)cout<<tab[i]<<" ";
     }
     for(int i=0;i<h;i++)
     {
         pozycja=i+1;
         if(pozycja%2==1)cout<<tab[i]<<" ";

     }
     cout<<endl;
     delete[]tab;



   }
return 0;
}






