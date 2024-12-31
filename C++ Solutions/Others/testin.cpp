#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct Items
{
    ll a, b, c;
};

ll Fix(ll x, ll y, ll z, ll t)
{
    if (x == max(x, max(y, z)))
        return 1;
    if (y == max(x, max(y, z)))
        return 0;
    if (z == max(x, max(y, z)))
        return t;
}

void Solve(Items *A, ll n, ll m)
{
    ll **DP = new ll*[n+1];	
	for(ll i = 0; i <= n; i++) 
    	DP[i] = new ll[m+1];
    
    for (ll i = 0; i <= n; ++i)
    {
        ll cnt = 0;
        ll *track = new ll[m+1];
        for (ll j = 0; j <= m; ++j)
        {
            if (i == 0 || j == 0)
            {
                DP[i][j] = 0;
                continue;
            }
            if (j >= A[i].a)
            {
                
                ll temp = DP[i][j - A[i].a] + A[i].b;
                if (DP[i][j - 1] < temp && DP[i - 1][j] < temp &&  DP[i - 1][j - A[i].a] + A[i].b < temp && cnt < A[i].c && track[j-A[i].a] != A[i].c)
                {
                    DP[i][j] = temp;
                    ++cnt;
                }
                else
                {
                    DP[i][j] = max(DP[i][j - 1], max(DP[i - 1][j], DP[i - 1][j - A[i].a] + A[i].b));
                    cnt = Fix(DP[i - 1][j - A[i].a] + A[i].b, DP[i - 1][j], DP[i][j - 1], cnt);
                }
            }
            else
                DP[i][j] = DP[i - 1][j];
            
            track[j] = cnt;
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
