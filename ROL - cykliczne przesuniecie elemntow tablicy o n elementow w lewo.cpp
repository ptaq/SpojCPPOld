#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int ile;
int n ;       //iloœæ elementów tablicy
int k=1 ;       //przesuniecie
int *tab;
cin>> ile;
while(ile--)
{


   cin >> n ;
   if(k>n) k%=n;
   tab=new int[n];
   for(int i=0; i<n; i++)
   {
       cin >> tab[i] ;
   }
   rotate(tab, tab+k, tab+n) ;
   for (int i=0; i<n; i++)
   {
      cout << tab[i]<<" ";
   }
   delete[]tab;
cout<<endl;
}
   return 0;
}
