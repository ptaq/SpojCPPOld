#include <iostream>

using namespace std;

void deszyfrowanie(string &wyraz,string klucz,char alfabet[27]);
void szyfrowanie(string &wyraz,string klucz,char alfabet[27]);
int main()
{
    char litery[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string a;
    string b;
    string c;


    cin>>c;
    cin>>b;
    cin >>a;
    int i=0;
    int licznik=0;
    while(b[i]=='0')
    {
        licznik++;
        i++;
    }
    if(licznik>0)b.erase (0,licznik);

    if(c=="SZYFRUJ")szyfrowanie(a,b,litery);

        else if(c=="DESZYFRUJ") deszyfrowanie(a,b,litery);

    cout<<a<<endl;

    return 0;
}
void szyfrowanie(string &wyraz,string klucz,char alfabet[27])
{
    int k;
    int dlugosc=klucz.length();
    int dlugoscW=wyraz.length();
    int h=0;
    int W;
    for(int i=0;i<dlugoscW;i++)
    {
        for(int j=0;j<26;j++)
        {
            if(wyraz[i]==alfabet[j])
            {
                if(h==dlugosc)h=0;

                    k=klucz[h]-48;

                if(j+k>=26)W=-(26-(j+k));
                    else W=j+k;
                wyraz[i]=alfabet[W];
                j=27;
                h++;
            }
        }

    }
}
void deszyfrowanie(string &wyraz,string klucz,char alfabet[27])
{
    int k;
    int dlugosc=klucz.length();
    int dlugoscW=wyraz.length();
    int h=0;
    int W;
    for(int i=0;i<dlugoscW;i++)
    {
        for(int j=0;j<26;j++)
        {
            if(wyraz[i]==alfabet[j])
            {
                if(h==dlugosc)h=0;

                    k=klucz[h]-48;

                if(j-k<0)W=26+(j-k);
                    else W=j-k;
                wyraz[i]=alfabet[W];
                j=27;
                h++;
            }
        }

    }

}
