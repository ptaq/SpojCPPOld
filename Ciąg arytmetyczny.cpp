#include <iostream>

using namespace std;

int main()
{
int t,n,tab[1000001],roznica,proznica,licz,maks;
cin>>t;
while(t--)
{
    licz=1;maks=1,roznica=0;
    cin>>n;

    for(int i=0;i<n;i++)cin>>tab[i];
    proznica=tab[1]-tab[0];

    for(int i=1;i<n;i++)
    {
        roznica=tab[i]-tab[i-1];
        if(roznica==proznica)
        {
            licz++;
            if(maks<licz)maks=licz;


        }
        else licz=2;

        proznica=roznica;
    }
    cout<<maks<<endl;
    for(int i=0;i<n;i++) tab[i]=0;
    }
    return 0;
}
