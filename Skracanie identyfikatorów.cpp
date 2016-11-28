#include <iostream>
#include <ctype.h>

using namespace std;

void znaki(string &a,int b);
void cyfry(string &a,int b);
void samogloski(string &a,int b);
void ostatni(string &a,int b);
int main()
{
    ios_base::sync_with_stdio(0);
    int ile;
    string wyraz;



    cin>>ile>>wyraz;

    if(wyraz.length()<=ile)cout<<wyraz;
    else
    {


    znaki(wyraz,ile);

    if(wyraz.length()<=ile)cout<<wyraz;
    else
    {
        cyfry(wyraz,ile);

        if(wyraz.length()<=ile)cout<<wyraz;

        else
        {
            samogloski(wyraz,ile);

            if(wyraz.length()<=ile)cout<<wyraz;
            else
            {
                ostatni(wyraz,ile);

            }



        }



    }
    }









    return 0;
}
void znaki(string &a,int b)
{
    int dlugosc=a.length();
    for(int i=dlugosc-1;i>=0&&dlugosc!=b;i--)
    {
        if(isalnum(a[i])==0&&a[i]!='$')
        {
            a.erase(i,1);
            dlugosc=dlugosc-1;


        }
    }



}
void cyfry(string &a,int b)
{
    int dlugosc=a.length();
    for(int i=dlugosc-1;i>=0&&dlugosc!=b;i--)
    {
        if(isdigit(a[i])!=0)
        {
            a.erase(i,1);
            dlugosc=dlugosc-1;


        }
    }



}
void samogloski(string &a,int b)
{

int dlugosc=a.length();
int razy=0;

    for(int i=0;i<dlugosc&&dlugosc!=b;i++)
    {

        if(a[i]=='i'||a[i]=='I'||a[i]=='y'||a[i]=='Y'||a[i]=='e'||a[i]=='E'||a[i]=='o'||a[i]=='O'||a[i]=='a'||a[i]=='A'||a[i]=='u'||a[i]=='U')
        {
            if(razy!=0)
            {
            a.erase(i,1);
            i=i-1;
            dlugosc=dlugosc-1;

            }
                razy=1;

        }
    }





}
void ostatni(string &a,int b)
{
    int dlugosc=a.length();

    for(int i=dlugosc-2;i>=0&&dlugosc!=b;i--)
    {
            a.erase(i,1);
            dlugosc=dlugosc-1;


    }
    cout<<a;

}

