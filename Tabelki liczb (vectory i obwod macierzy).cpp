#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main()
{
    int n;
    int m;
    int wyraz[1000];
    int ile;


    cin>>ile;
    while(ile--)
    {
        cin>>n>>m;
        vector<vector<int> > tab;
        tab.resize(n);
        for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < m; k++)
			{
				int temp;
				cin >> temp;
				tab[j].push_back(temp);
			}
		}
		cout<<endl;

        int k=0;
        for(int j=0; j<m; j++)
        {
            wyraz[k]=tab[0][j];
            k++;
        }
        for(int i=1; i<n-1; i++)
        {
            wyraz[k]=tab[i][m-1];
            k++;
        }
        for(int j=m-1; j>=0; j--)
        {
            wyraz[k]=tab[n-1][j];
            k++;
        }
        for(int i=n-2; i>=1; i--)
        {
            wyraz[k]=tab[i][0];
            k++;
        }

        rotate(wyraz,wyraz+1,wyraz+k);

        k=0;
        for(int j=0; j<m; j++)
        {
            tab[0][j]=wyraz[k];
            k++;
        }
        for(int i=1; i<n-1; i++)
        {
            tab[i][m-1]=wyraz[k];
            k++;
        }
        for(int j=m-1; j>=0; j--)
        {
            tab[n-1][j]=wyraz[k];
            k++;
        }

        for(int i=n-2; i>=1; i--)
        {
            tab[i][0]=wyraz[k];
            k++;
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)cout<<tab[i][j]<<" ";
            cout<<endl;
        }
        tab.clear();

    }

    return 0;
}
