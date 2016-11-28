#include <iostream>
using namespace std;

int main()
{
    int ile,liczba;
    string znak;
    cin>>ile;
    int *tab=new int[ile];
    for(int i=0;i<ile;i++)
    {
        cin>>tab[i];
    }
    cin>>znak>>liczba;
    if(znak[0]=='<')
    {
        for(int i=0;i<ile;i++)
        {
            if(tab[i]<liczba)cout<<tab[i]<<endl;

        }
    }
    else
    {
        for(int i=0;i<ile;i++)
        {
            if(tab[i]>liczba)cout<<tab[i]<<endl;

        }
    }
delete[]tab;
  return 0;
}
