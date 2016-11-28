#include <iostream>

using namespace std;

int main()
{
int *tab;
int szukana;

int ile;

while(cin>>szukana>>ile)
{
    int razy=0;
    tab=new int[ile];
    for(int i=0;i<ile;i++)
    {
        cin>>tab[i];
        if(tab[i]==szukana)razy++;
    }
    cout<<razy<<endl;
    delete[]tab;
}

  return 0;
}
