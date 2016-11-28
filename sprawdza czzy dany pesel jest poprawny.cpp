#include <iostream>

using namespace std;

int main()
{
    int ile,suma,k;
    char liczba[12];
    int i=1;

    cin>>ile;
    while(ile>=i)
    {
        suma=0;
        int pesel[11]={1,3,7,9,1,3,7,9,1,3,1};

        cin>>liczba;
        for(int j=0;j<11;j++)
        {
           pesel[j]=pesel[j]*((static_cast<int>(liczba[j]))-48);
           suma=suma+pesel[j];
        }
        if(suma>0)
        {
            k=suma%10;
            if(k==0)cout<<"D"<<endl;
            else cout<<"N"<<endl;
        }
        else cout<<"N"<<endl;

    i++;
    }

    return 0;
}



