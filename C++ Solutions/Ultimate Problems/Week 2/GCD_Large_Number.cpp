// BASICALLY IT IS A^B%C BUT WITH F**KING HUGE NUMBERS
#include<bits/stdc++.h>

#define ll long long

using namespace std;

ll GCD(ll a, ll b)
{
    while(b != 0)
    {
        a %= b;
        swap(a, b);
    }

    return abs(a);
}
// read the number digit-by-digit and maintain the remainder.
ll mod(string a, ll n)
{
    ll ans = 0;
    for (ll i = 0; i < a.length(); ++i)
        ans = (ans * 10 + (ll)a[i] - '0') % n; 
    
    return ans;
}

void solve(ll a, string b)
{
    ll x = mod(b, a);
    
    cout << GCD(x, a) << "\n";
}

main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, a;
    string b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        solve(a, b);
    }
    
    return 0;
}