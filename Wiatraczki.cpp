#include <iostream>

using namespace std;

int main()
{
    int n,t;//zmienna pomocnicza i ilosc test�w
    while(true)//niesko�czona p�tla przerywana wprowadzeniem zera
    {
    cin >> t;//wprowadzamy zmienna
    if(t==0)//je�li wprowadzono zero
        break;//przerywamy
    if(t<0)//je�li mniejsze ni� zero
        n = t*(-1);//nadajemy zmiennej pomocniczej przeciwn� warto��
    if(t>0)//je�li wi�ksze od zera
        n=t;//nadajemy warto�� tak� sam�
    char tab[400][400];//tablica znakowa dwuwymiarowa do "rysowania" wiatraczka
    for(int i = 0 ; i < 2*n ; i++)//przelatujemy przez wszystkie kolumny
    {
        for(int k = 0 ; k < 2*n ; k++)//przez wszystkie rz�dy
        {
            tab[i][k] = '.';//wstawiamy wsz�dzie kropki
        }
    }

    if(t>0)//je�li t jest wi�ksze od zera
    {
        for(int i = 0,p=0 ; i < n ; i++,p++)
        {
        tab[n-p-1][n-p-1] = '*';
        for(int k = 1 ; k + p < n ; k++)
            tab[n-p-1][n-p-1-k] = '*';
        tab[n-p-1][n+p] = '*';
        for(int k = 1 ; k+p<n ; k++)
            tab[n-p-1-k][n+p] = '*';
        tab[n+p][n-p-1] = '*';
        for(int k = 1 ; k+p<n ; k++)
            tab[n+p+k][n-p-1] = '*';
        tab[n+p][n+p] = '*';
        for(int k = 1 ; k+p<n ; k++)
            tab[n+p][n+p+k] = '*';
    }
    }
    if(t<0)
    {
        for(int i = 0,p=0 ; i < n ; i++,p++)
        {
        tab[n-p-1][n-p-1] = '*';
        for(int k = 1 ; k+p< n ; k++)
            tab[n-p-1-k][n-p-1] = '*';

        tab[n-p-1][n+p] = '*';
        for(int k = 1 ; k+p<n ; k++)
            tab[n-p-1][n+p+k] = '*';

        tab[n+p][n-p-1] = '*';
        for(int k = 1 ; k+p<n ; k++)
            tab[n+p][n-p-1-k] = '*';

        tab[n+p][n+p] = '*';
        for(int k = 1 ; k+p<n ; k++)
            tab[n+p+k][n+p] = '*';
    }
    }

    for(int i = 0 ; i < 2*n ; i++)
    {
        for(int k = 0 ; k < 2*n ; k++)
        {
            cout << tab[i][k];
        }
        cout << endl;
    }
    }

    return 0;
}
