#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct Items
{
    ll a, b, c;
};

void Solve(Items *A, ll n, ll m)
{
    ll **DP = new ll*[n+1];	
	for(ll i = 0; i <= n; i++) 
    	DP[i] = new ll[m+1];
    
    for (ll i = 0; i <= n; ++i)
    {
        ll *track = new ll[m+1];
        for (ll k = 0; k < A[i].c; ++k)
            for (ll j = k * A[i].a; j <= m; ++j)
                {
                    if (i == 0 || j == 0)
                    {
                        DP[i][j] = 0;
                        track[j] = 0;
                        continue;
                    }
                    if (j >= A[i].a)
                    {
                        DP[i][j] = max(DP[i-1][j], DP[i-1][j - A[i].a] + A[i].b);
                    }
                    else
                        DP[i][j] = DP[i - 1][j];
                    
                }
    }
    

    for (ll i = 0; i <= n; i++)
    {
        for (ll j = 0; j <= m; j++)
            cout << DP[i][j] << "  ";
    
        cout << "\n";
    }
    
    ll res = DP[n][m], W = m;
    ll cnt[n + 1] = {0};
    cout << res << "\n";
    //for (ll i = n; i > 0, res > 0; --i)
    //{
    //    if (DP[i - 1][W] == res)
    //        continue;
//
    //    while (DP[i][W - A[i].a] == res - A[i].b)
    //    {
    //        ++cnt[i];
    //        W -= A[i].a;
    //        res -= A[i].b;
    //    }   
    //    
    //    if (DP[i - 1][W - A[i].a] == res - A[i].b && (DP[i - 1][W] != res))
    //    {
    //        ++cnt[i];
    //        W -= A[i].a;
    //        res -= A[i].b;
    //    }
    //    
    //}   
    //for (ll i = 1; i <= n; ++i)
    //       cout << cnt[i] << "\n";
}

main(void)
{
    freopen("Bai4.inp","r",stdin);
    freopen("Bai4.out","w",stdout);

    ll n, m;
    cin >> n >> m;
    Items *Arr = new Items[n + 1];
    for (ll i = 1; i <= n; ++i)
        cin >> Arr[i].a >> Arr[i].b >> Arr[i].c;

    Solve(Arr, n, m);

    return 0;
}
