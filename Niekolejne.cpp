#include <iostream>

using namespace std;

int main()
{
 const int n=3;
 const int m=3;
 int tab[n][m];
 int poprzedni,nastepny;

 for(int i=0;i<n;i++)
 {
     for(int j=0;j<m;j++)
     {
         cin>>tab[i][j];
     }
 }


for(int i=0;i<n-1;i=i+2)
 {
     poprzedni=tab[i][0];
     nastepny=tab[i+1][0];
     tab[i+1][0]=poprzedni;

 }

 for(int i=0;i<n;i++)
 {
     for(int j=0;j<m;j++)
     {
         cout<<tab[i][j]<<" ";
         if(j==m-1)cout<<endl;

     }
 }





}
