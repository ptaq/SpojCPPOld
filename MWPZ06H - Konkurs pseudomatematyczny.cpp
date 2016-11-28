#include <iostream>
using namespace std;

void sortowanie(int tas[],int a);
int main()

{
    int D,N,zamiana,schowek;
    cin>>D;

    while(D--)
    {
      cin>>N;
      int *tab=new int[N];
      for(int i=0;i<N;i++)
      {
          cin>>tab[i];
      }

      sortowanie(tab, N);

        schowek=tab[0];
        zamiana=0;

        for(int i=0;i<N;i++)
        {
            if(tab[0]==tab[i])
            {
                cout<<tab[i]<<" ";
                zamiana++;
            }
        }



         /*while(tab[zamiana]==schowek)
        {

            cout<<tab[zamiana]<<" ";
            zamiana++;
        }*/
       for(int i=N-1;i>=zamiana;i--)
      {
          cout<<tab[i]<<" ";
      }
      cout<<endl;



      delete[]tab;

    }

    return 0;
}
void sortowanie(int tas[],int a)
{
    int licznik;
  do
       {
        licznik=0;
        for(int i=0;i<a-1;i++)
        {
            if(tas[i]<tas[i+1])
        {
            licznik++;
            swap(tas[i],tas[i+1]);
        }
        }
        }while(licznik !=0);

}
