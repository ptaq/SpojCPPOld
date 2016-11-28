#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctype.h>

using namespace std;

int second(char wyra[]);
int imier(char wyra[]);
int termin(char wyra[]);
int main()
{
    char a[6];
    char b[10];
    char c[5];
    char d[5];
    char imie[12];
    char nazwisko[22];
    char data[11];
    while(cin>>a>>imie>>b>>nazwisko>>c>>d>>data)
    {
        if(imier(imie)>0)
        {

            if(second(nazwisko)>0)
            {

                if(termin(data)>0)
                {
                    cout<<3<<endl;
                }else cout <<2<<endl;
            }
            else cout<<1<<endl;
        }
        else cout<<0<<endl;
        imie[0]=0;
        nazwisko[0]=0;
        data[0]=0;









    }

return 0;

}
int imier(char wyra[])
{
    int wynik;
    if(wyra[0]>=65&&wyra[0]<=90)
    {
        for(int i=1;i<11;i++)
        {
            if(i==10&&wyra[10]!=59)wynik=0;
            else if(wyra[i]>=97&&wyra[i]<=122)wynik=1;
            else if (wyra[i]==59)
            {
                wynik=1;
                i=11;
            }
            else
            {
                wynik=0;
                i=11;
            }
        }
    }
    else wynik=0;
    return wynik;
}
int second(char wyra[])
{
    int wynik;
    if(wyra[0]>=65&&wyra[0]<=90)
    {
        for(int i=1;i<21;i++)
        {
            if(i==20&&wyra[20]!=59)wynik=0;
            else if(wyra[i]>=97&&wyra[i]<=122)wynik=1;
            else if (wyra[i]==';')
            {
                wynik=1;
                i=21;
            }
            else
            {
                wynik=0;
                i=21;
            }
        }
    }
    else wynik=0;
    return wynik;
}
int termin(char wyra[])
{
    int wynik;
    char rok[5];
    int liczba;
    char mies[3];
    char dzien[3];
    for(int i=0;i<4;i++)rok[i]=wyra[i];
    liczba=atoi(rok);
    if(liczba>=1900&&liczba<=2000)
    {
        if(wyra[4]=='-')
        {
            if(isdigit(wyra[5])!=0&&isdigit(wyra[6])!=0)
            {


            mies[0]=wyra[5];
            mies[1]=wyra[6];
            liczba=atoi(mies);

            if(liczba>=1&&liczba<=12)
            {
                if(wyra[7]=='-')
                {
                if(isdigit(wyra[8])!=0&&isdigit(wyra[9])!=0)
                {


                    dzien[0]=wyra[8];
                    dzien[1]=wyra[9];
                    liczba=atoi(dzien);

                    if(liczba>=1&&liczba<=31)wynik=1;
                    else wynik=0;


                }else wynik=0;

                }else wynik=0;
            }else wynik=0;



        }else wynik=0;
        }else wynik=0;
    }else wynik=0;



    return wynik;

}

