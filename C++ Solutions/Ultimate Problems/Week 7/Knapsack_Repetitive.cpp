#include<bits/stdc++.h>

#define ll long long
#define vll vector<ll> 

using namespace std; 

// Given a set of coins, what is the maximum amount of money you can make less or equal than n (can use multiple coins)
void Solve(vll A, ll n, ll s)
{
    vll DP(s + 1, 0);

    for (auto x : A)
        for (ll j = 1; j <= s; ++j)
        {
            if (x > j)
                DP[j] = max(DP[j-1], DP[j]);
            else 
                DP[j] = max( DP[j - x] + x, 
                        max(DP[j-1], DP[j]) );
            
        }

    //cout << DP[s] << "\n";

    for(ll i = 0; i <= s; ++i)
        cout << DP[i] << " ";
}

main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, n, s, x;
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        vll A(n);
        for (ll i = 0; i < n; ++i)
        {
            cin >> x;
            A.push_back(x);
        }
        
        Solve(A, n, s);
    }
 
    return 0;
}