#include <iostream>
#include <algorithm>

using namespace std;

int main()

{
int n ;       //iloœæ elementów tablicy
int k ;       //przesuniecie
int i ;
int *tab ;

   cin >> n ;
   cin >> k ;
   if(k>n) k%=n;
   tab=new int[n];
   for(i=0; i<n; i++)
   {
       cin >> tab[i] ;
   }
   rotate(tab, tab+k, tab+n) ;
   for (i=0; i<n; i++)
   {
      cout << tab[i]<<" ";
   }
   delete[]tab;
   return 0;
}
