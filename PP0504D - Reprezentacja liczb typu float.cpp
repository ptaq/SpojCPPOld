#include <iostream>
#include <cstdio>
using namespace std;
char tab[8];
float a;
int ile;
int main ()
{
    cin>>ile;
    while(ile--)
    {


        while(cin >> a)
        {


        void *k;
        k = (float*) &a;
        sprintf ( tab, "%08x\n", *((int*)k) );
        if (tab[0]!='0') cout << tab[0];
        cout << tab[1] << " ";
        if (tab[2]!='0') cout << tab[2];
        cout << tab[3] << " ";
        if (tab[4]!='0') cout << tab[4];
        cout << tab[5] << " ";
        if (tab[6]!='0') cout << tab[6];
        cout << tab[7] << endl;
        }
    }
return 0;
}
