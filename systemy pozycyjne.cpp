#include <iostream>


using namespace std;

void szesnastkowy(int n)
{
    if(n>0)
    {
        szesnastkowy(n/16);
        if(n%16>9)
            switch(n%16)
        {
            case 10:cout<<"A";break;
            case 11:cout<<"B";break;
            case 12:cout<<"C";break;
            case 13:cout<<"D";break;
            case 14:cout<<"E";break;
            case 15:cout<<"F";break;
        }
        else cout<<n%16;
    }
}
void jedenastkowy(int n)
{
    if(n>0)
       {
          jedenastkowy(n/11);
            if(n%11>9)
            switch(n%11)
            {
                case 10:cout<<"A";break;
            }
            else cout<<n%11;
       }
}

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==0)cout<<0<<" "<<0;
        else szesnastkowy(n);
        cout<<" ";
        jedenastkowy(n);
        cout<<endl;
    }

return 0;
}





