#include<bits/stdc++.h>

#define ll long long
#define MOD 1000000007 

using namespace std;

ll mul(ll x, ll y, ll n)
{
    ll res = 0;
    x %= n;
    while (y > 0)
    {
        if (y % 2 != 0)
            res = (res + x) % n;
        y /= 2;
        x = (x + x) % n;
    }
    
    return res;
}

ll power1(ll x, ll y, ll n)
{
    if (x == 1)
        return 1;
    if (y == 0)
        return 1;
    ll temp = power1(x, y/2, n);
    if (y % 2 == 0)
        return (temp * temp) % n;
    else
        return ( ((temp * temp) % n) * (x % n) ) % n;
}

ll power2(ll x, ll y, ll n)
{
    ll res = 1;
    x %= n;
    while (y > 0)
    {
        if (y % 2 != 0)
            res = mul(res, x, n);
        y /= 2;
        x = mul(x, x, n);
    }
    return res;
}


void solve(ll a, ll b, ll n)
{
    ll x = power1(a, b, n);
    ll y = power2(a, b, n);
    
    cout << x << "\n" << y;
}

main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll a, b, n;
    
    cin >> a >> b >> n;
    solve(a, b, n);
    
    
    return 0;
}