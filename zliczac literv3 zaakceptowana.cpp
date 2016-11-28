#include <iostream>

using namespace std;

int main()
{
    string zdanie;
    int licznik[205]={},a;
    cin>>a;
    cin.ignore();
    while(a--)
    {
        getline(cin,zdanie);
        int i=0;
        while(zdanie[i])
        {
            licznik[zdanie[i]]++;
            i++;
        }
    }
    for(int i=97;i<123;i++)
    {
        if(licznik[i]>0)
            cout<<(char)i<<" "<<licznik[i]<<endl;
    }
    for(int i=65;i<91;i++)
    {
        if(licznik[i]>0)
            cout<<(char)i<<" "<<licznik[i]<<endl;
    }
    return 0;

}
