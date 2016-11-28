#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    unsigned long ilosc_linii = 0;
    string z;

    while (getline(cin,z))
        ++ilosc_linii;

    cout << ilosc_linii;

    return 0;
}
