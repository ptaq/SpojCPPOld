#include <iostream>

using namespace std;
int main()
{
    long long t;
    long long w = 0;
    long long s = 0;
    long long x;

    cin>>t;
    while(t--)
    {
        cin>>x;
        if(w > 0)
            w += x;
        else
            w = x;
        if(w > s)
            s = w;
    }
    cout<<s;
}
