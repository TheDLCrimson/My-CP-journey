#include<bits/stdc++.h>

#define ll long long

using namespace std;

const ll MOD = 1000000007;

ll mul(ll x, ll y, ll mod = MOD)
{
    ll res = 0;
    x %= mod;
    while (y > 0)
    {
        if (y % 2 != 0)
            res = (res + x) % mod;
        y /= 2;
        x = (x + x) % mod;
    }
    
    return res;
}

ll power(ll x, ll y, ll mod = MOD)
{
    ll res = 1;
    x %= mod;
    while (y > 0)
    {
        if (y % 2 != 0)
            res = mul(res, x, mod);
        y /= 2;
        x = mul(x, x, mod);
    }
    
    return res;
}

// sub = |a - b| and sub < MOD = 10^9 + 7
// GCD(a^n + b^n, sub) = GCD( (a^n + b^n) % (sub), sub) = GCD( (a^n % sub + b^n % sub) % (sub), sub)
// => Find a^n % sub
void solve(ll a, ll b, ll n)
{
    if (a == b)
    {
        cout << (power(a, n) + power(b, n)) % MOD << "\n";
        return;
    }
    if (a < b)  
        swap(a, b);
    ll sub = a - b;
    ll sum = (power(a, n, sub) + power(b, n, sub)) % sub;
    //cout << sum << " " << sub << " ";
    cout << __gcd(sum, sub) << "\n";
}

main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, a, b, n;
    cin >> t;
    while (t --> 0)
    {
        cin >> a >> b >> n;
        solve(a, b, n);
    }
    
    return 0;
}