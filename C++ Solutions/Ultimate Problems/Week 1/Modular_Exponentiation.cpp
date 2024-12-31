// BASICALLY IT IS A^B%C BUT WITH F**KING HUGE NUMBERS
#include<bits/stdc++.h>

#define ll long long
#define MOD 1000000007
using namespace std;

ll power(ll x, ll y)
{
    if (x == 1)
        return 1;
    if (y == 0)
        return 1;
    ll temp = power(x, y/2);
    if (y % 2 == 0)
        return (temp * temp) % MOD;
    else
        return ( ((temp * temp) % MOD) * (x % MOD) ) % MOD;
}

// read the number digit-by-digit and maintain the remainder.
ll mod(string a)
{
    ll ans = 0;
    for (ll i = 0; i < a.length(); ++i)
        ans = (ans * 10 + (ll)a[i] - '0') % MOD; 
    
    return ans;
}

void solve(string a, string b)
{
    ll x = mod(a);
    ll ans = 1;
    //cout << x << "\n";
    for (ll i = 0; i < b.length(); ++i)
        ans = ( power(ans, 10) * power(x, (ll)b[i] - '0') ) % MOD;
    
    cout << ans << "\n";
}

main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    string a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        solve(a, b);
    }
    
    return 0;
}