#include <iostream>

using namespace std;
int zliczacz(string a,int &wyn);
int fast_atoi(const char *buff);
int main()
{
    ios_base::sync_with_stdio(0);

    int razy;
    string zadanie;
    string lewa,prawa;

    int ile;
    int j;
    int liczba;
    int dlugosc;

    int wynikprawa;
    int wyniklewa;
    int xlewa;
    int xprawa;

    cin>>razy;
    while(razy--)
    {
        ile=0;
        j=0;
        xlewa=0;
        xprawa=0;




    cin>>zadanie;

    while(zadanie[j]!='=')
    {
        j++;
        ile++;
    }
    lewa=zadanie.substr(0,ile);
    prawa=zadanie.substr(ile+1,zadanie.length()-1);

    wyniklewa=zliczacz(lewa,xlewa);
    wynikprawa=zliczacz(prawa,xprawa);


    int sumaX=xlewa+(-xprawa);
    int sumaL=wynikprawa+(-wyniklewa);
    if(sumaX==0&&sumaL==0)cout<<"NIE"<<endl;
    else if(sumaX==0&&(sumaL!=0))cout<<"NIE"<<endl;
    else cout<<sumaL/sumaX<<endl;










    }
    return 0;
}
int zliczacz(string a,int &wyn)
{
    int x=0;
    int j=0;
    string konkretna;
    int dlugosc=a.length();


    for(int i=0;i<dlugosc;i++)
    {



        if((a[i]=='-'&&a[i+1]!='x')||(a[i]=='+'&&a[i+1]!='x')||(a[i]>=48&&a[i]<=57))
        {
            j=i+1;

            while(a[j]!='-'&&a[j]!='+'&&a[j]!='x'&&j<dlugosc)
            {
                j++;
            }

            if(a[j]!='x')
            {
            konkretna=a.substr(i,j);
            x=x+fast_atoi(konkretna.c_str());
            i=j-1;
            }
            else
            {

                    konkretna=a.substr(i,j);

                    wyn=wyn+fast_atoi(konkretna.c_str());

            i=j;
            }

        }
        else if (a[i]=='x')
        {
            if(a[i-1]=='-')wyn+=-1;
            else wyn+=1;


        }
    }
    return x;
}
int fast_atoi(const char *buff)
{
    int c = 0, sign = 0, x = 0;
    const char *p = buff;

    for(c = *(p++); (c < 48 || c > 57); c = *(p++)) {if (c == 45) {sign = 1; c = *(p++); break;}}; // eat whitespaces and check sign
    for(; c > 47 && c < 58; c = *(p++)) x = (x << 1) + (x << 3) + c - 48;

    return sign ? -x : x;
}
