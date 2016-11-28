#include <iostream>

using namespace std;

int poprzedni;
int ciag(int n,int poprzedni);
int main()
{
    int ile,n,wynik;


    cin>>ile;
    while(ile--)
    {
        poprzedni =0;
        cin>>n;
        wynik=ciag(n,poprzedni);
        cout<<wynik<<endl;;
    }
    return 0;
}
int ciag(int n,int poprzedni)
{

    if(n==1)return poprzedni;
    else if(n%2==0)
    {
        poprzedni++;
        return ciag(n/2,poprzedni);
    }
    else if(n%2==1)
    {
        poprzedni++;
        return ciag(3*n+1,poprzedni);
    }

}
