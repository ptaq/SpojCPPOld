#include <iostream>

using namespace std;

int fast_atoi(const char *buff);
int main()
{
    int ile,k,h;

    cin>>ile;
    string wyraz,
    char kopia[3];
    int dlugosc;
    int liczba;
    int suma=0;
    int sterowanie=2;


    while(ile--)
{

        cin>>wyraz;
        dlugosc=wyraz.length();
        if(dlugosc>2)for(int i=0;i<dlugosc-2;i++)suma=suma+(wyraz[i]-48);
        h=suma;
        do
        {



        if((wyraz[dlugosc-1])=='0'||(wyraz[dlugosc-1]=='5'))
        {
            suma=h;

            for(int i=dlugosc-2;i<dlugosc;i++)suma=suma+(wyraz[i]-48);

            if(suma%3==0)sterowanie=1;
        }
        else
        {
            kopia=wyraz.substr(dlugosc-2,2);
            liczba=fast_atoi(kopia);

            wyraz[dlugosc-2]=(liczba-1)/10+48;
            wyraz[dlugosc-1]=((liczba-1)%10)+48;
        }
        }
        while(sterowanie!=1);
        cout<<wyraz<<endl;
        sterowanie=2;

}

return 0;
}
int fast_atoi(const char *buff)
{
    int c = 0, sign = 0, x = 0;
    const char *p = buff;

    for(c = *(p++); (c < 48 || c > 57); c = *(p++)) {if (c == 45) {sign = 1; c = *(p++); break;}};
    for(; c > 47 && c < 58; c = *(p++)) x = (x << 1) + (x << 3) + c - 48;

    return sign ? -x : x;
}

