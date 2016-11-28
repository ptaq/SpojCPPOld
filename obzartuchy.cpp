#include <iostream>
#include <cmath>

using namespace std;

int main()
{

  int  ob;
  int pudelko;
  int *czas;
int ile;
int j=1;
cin>>ile;
while(ile>=j)
{
double suma=0;
     cin>>ob>>pudelko;
     czas=new int[ob];
     for(int i=0;i<ob;i++)
     {
         cin>>czas[i];
     }
     for(int i=0;i<ob;i++)
     {

       suma=(86400/czas[i])+suma;
     }
     suma=suma/pudelko;
    	suma=ceil(suma);
     cout<<suma<<endl;
    delete[]czas;
    j++;
}

  return 0;
}

