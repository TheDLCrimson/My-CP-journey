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

main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x, ans;
        cin >> n >> x;
        ans = x;
        for (ll i = 1; i < n; ++i)
        {
            cin >> x;
            ans = GCD(x, ans);
        }
        
        (ans == 1) ? cout << "YES\n" : cout << "NO\n";
    }
 
    return 0;
}