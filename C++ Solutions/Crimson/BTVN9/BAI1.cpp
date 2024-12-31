#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool check(ll n, ll k)
{
    ll cnt = 1;
    for (ll i = 2; i <= sqrt(n); ++i)
        if (n % i == 0)
            ++cnt;
    ll t = sqrt(n);
    if (t * t == n)
        cnt = cnt * 2 - 1;
    else
        cnt *= 2;

    if (cnt == k)
        return true;
    return false;
}

void Solve(ll n, ll k)
{
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (check(i, k))
            ++ans;
    }
    cout << ans;
}

main(void)
{
    //freopen("BAI1.inp","r",stdin);
    //freopen("BAI1.out","w",stdout);

    ll n, k;
    cin >> n >> k;

    Solve(n, k);

    return 0;
}
