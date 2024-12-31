#include <bits/stdc++.h>
#define ll long long
using namespace std;

void Solve(ll *A, ll n)
{
    ll ans = 0;
    for (ll i = n - 1; i > 0; --i)
    {
        ll l = 0, r = i - 1;
        while (l < r)
            if (A[l] + A[r] > A[i])
            {
                ans += r - l;
                --r;
            }
            else
                ++l;
    }    
    
    cout << ans;
}

main(void)
{
    //freopen("BAI2.inp","r",stdin);
    //freopen("BAI2.out","w",stdout);

    ll n;
    cin >> n;
    ll *A = new ll[n];
    for (ll i = 0; i < n; ++i)
        cin >> A[i];
    
    sort(A, A + n);

    Solve(A, n);

    return 0;
}
