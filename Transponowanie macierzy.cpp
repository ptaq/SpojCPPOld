#include <iostream>
using namespace std;
int m,n,s;
int *tab;
int main()
{
     cin >> m >> n;
     tab=new int[n*m];
     for (int i=0; i < m*n; i++)
     {
         cin >> tab[i];
     }
     for (int k=0; k < n; k=s)
     {
         s=k;
         for (; k < n*m; k=k+n)
         {
             cout << tab[k] << " ";
         }
         cout << "\n";
         s++;
      }
      delete[]tab;
      return 0;
}






