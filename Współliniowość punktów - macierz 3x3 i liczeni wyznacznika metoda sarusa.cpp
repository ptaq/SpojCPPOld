#include <iostream>

using namespace std;


int main()
{
    int ile,wyznacznik;
    int tab[5][3];
    tab[0][2]=tab[1][2]=tab[2][2]=tab[3][2]=tab[4][2]=1;

    cin>>ile;
    while(ile--)
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<2;j++)
            {
              cin>>tab[i][j];
            }
        }

        tab[3][0]=tab[0][0];
        tab[4][0]=tab[1][0];
        tab[3][1]=tab[0][1];
        tab[4][1]=tab[1][1];


        wyznacznik=(tab[0][0]*tab[1][1]*tab[2][2])+(tab[1][0]*tab[2][1]*tab[3][2])+(tab[2][0]*tab[3][1]*tab[4][2])
        +(-(tab[0][2]*tab[1][1]*tab[2][0]))+(-(tab[1][2]*tab[2][1]*tab[3][0]))+(-(tab[2][2]*tab[3][1]*tab[4][0]));

        if(wyznacznik==0)cout<<"TAK"<<endl;
        else cout<<"NIE"<<endl;

    }

    return 0;
}
