#include<bits/stdc++.h>

#define ll unsigned long long

using namespace std; 

struct Clothes
{
    ll p, f;
};

void Solve(Clothes *A, ll n, ll m)
{
    ll r = m;
    if (m > 1800)
        r += 200;
    
    vector<ll> DP(r + 1, 0);
    // Knapsack with O(w) space ONLY UPDATE THE SPECIFIC NUMBER
    for (ll i = 0; i < n; ++i)
        for (ll j = r; j >= A[i].p; --j)
        {
            if (j == A[i].p || DP[j - A[i].p] > 0)                                  
                DP[j] = max(DP[j], DP[j - A[i].p] + A[i].f);
        }
    // Knapsack with O(w) space UPDATE THE LAST ELEMENT OF DP (DP[w])
    //for (ll i = 0; i < n; ++i)
    //    for (ll j = w; j >= A[i].p; --j)
    //      DP[j] = max(DP[j], DP[j - A[i].p] + A[i].f);
    //return DP[w];
                                        
    ll Max = 0;
    if (m > 1800 && m <= 2000)
    {
        for (ll i = 0; i <= m; ++i)
            Max = max(Max, DP[i]);
        for (ll i = 2001; i <= r; ++i)
            Max = max(Max, DP[i]);
    }
    else 
        for (ll i = 0; i <= r; ++i)
            Max = max(Max, DP[i]);
        
    cout << Max << "\n";
    DP.clear();
}

main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n, money;
    while (cin >> money >> n)
    {
        Clothes *A = new Clothes[n];
        for (ll i = 0; i < n; ++i)
            cin >> A[i].p >> A[i].f;
            
        Solve(A, n, money);
    }
    return 0;
}