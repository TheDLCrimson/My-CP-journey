#include<bits/stdc++.h>

#define ll long long
#define MAX 1005

using namespace std;

ll Edit[MAX][MAX];

ll Min(ll A, ll B, ll C)
{
    return min (A, min(B, C));
}

void Print(ll n, ll m)
{
	for (ll i = 0; i <= n; i++)
	{ 
		for (ll j = 0; j <= m; j++) 
			cout << Edit[i][j] << " ";
		
		cout << "\n";
	}

}

main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string X, Y;
    cin >> X >> Y;
    ll n = X.length();  
    ll m = Y.length();
    X = " " + X;
    Y = " " + Y;
    for (ll i = 0; i <= n; i++)
        Edit[i][0] = i;
    for (ll j = 0; j <= m; j++)
        Edit[0][j] = j;

    for (ll i = 1; i <= n; i++)
        for (ll j = 1; j <= m; j++)
        {
            Edit[i][j] = Min( Edit[i-1][j] + 1, Edit[i][j-1] + 1, Edit[i-1][j-1] + (X[i] != Y[j]) );
        }

    cout << Edit[n][m] << "\n";

    Print(n, m);

    return 0;
}