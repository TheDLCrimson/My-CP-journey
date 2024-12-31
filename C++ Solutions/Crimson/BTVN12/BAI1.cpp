#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll MOD = 1e9;

main(void)
{
    freopen("BAI1.INP","r",stdin);
    freopen("BAI1.OUT","w",stdout);
    
    ll n, ans = 0;
    cin >> n;
    
    for (ll i = n; i >= 4; --i)
    {
        ll l = 2;
        ll r = i - 1;

        while (l < r)
        {
            if (l + r > i)
            {
                //cout << l << " " << r << " " << i << "\n";
                ans += r - l;
                ans %= MOD;
                --r;
            }
            else 
                ++l;
        }
    }

    cout << ans;

    return 0;
}


