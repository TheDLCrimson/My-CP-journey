#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct Items
{
    ll a, b;
};

void Solve(Items *A, ll n, ll m)
{
    ll DP[2][m + 1];
    for (ll i = 0; i <= m; ++i)
        DP[0][i] = 0;
    
    for (ll i = 1; i <= n; ++i)
        for (ll j = 0; j <= m; ++j)
        {
            if (j == 0)
            {
                DP[(i + k) % 2][j] = 0;
                continue;
            }
            if (j >= A[i].a)
                DP[(i + k) % 2][j] = max(DP[(i + k + 1) % 2][j], DP[(i + k + 1) % 2][j - A[i].a] + A[i].b);
            else
                DP[(i + k) % 2][j] = DP[(i + k + 1) % 2][j];
        }

    cout << DP[n%2][m];
}

main(void)
{
    //freopen("BAI4.inp","r",stdin);
    //freopen("BAI4.out","w",stdout);

    ll n, m;
    cin >> n >> m;
    Items *Arr = new Items[n + 1];
    for (ll i = 1; i <= n; ++i)
        cin >> Arr[i].a >> Arr[i].b;

    Solve(Arr, n, m);

    return 0;
}
