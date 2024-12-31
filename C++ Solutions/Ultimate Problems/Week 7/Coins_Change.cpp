#include<bits/stdc++.h>

#define ll long long
#define vll vector<ll> 

using namespace std; 

vll A = {10, 20, 50};

void Solve(ll n)
{
    vll DP(n + 1, 0);
    DP[0] = 1;
    for (auto x : A)
        for (ll i = 1; i <= n; ++i)
            if (x <= i)
                DP[i] += DP[i - x];
    
    (DP[n] > 1) ? cout << "There are " << DP[n] << " ways to produce " << n << " cents change.\n" 
    : cout << "There is only " << DP[n] << " way to produce " << n << " cents change.\n";
    
    //cout << DP[n] << "\n";
    //for (auto x : DP)
    //    cout << x << " ";
}

main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n;
    while (cin >> n)
        Solve(n);
 
    return 0;
}