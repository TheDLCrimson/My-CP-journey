#include<bits/stdc++.h>

#define ll long long

using namespace std;

//CODE BY CRIMSON XD

void Solve(vector<ll> A, ll n)
{
    ll ans = 0;
    vector<ll> DP(n);
    fill(DP.begin(), DP.end(), 1);
    
    for(ll i = 1; i < n; ++i)
    {
        for(ll j = 0; j < i; ++j)
            if(A[j] <= A[i] && ( DP[j] + 1 > DP[i]) )
                DP[i] = DP[j] + 1;
        ans = max(ans, DP[i]);
    }
    
    cout << ans;
}

main(void)
{
    freopen("Dayconkogiam.inp","r",stdin);
    freopen("Dayconkogiam.out","w",stdout);
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, x, k;
    cin >> n;
    vector<ll> A;

    for (ll i = 0; i < n; ++i)
    {   
        cin >> x;
        A.push_back(x);
    }
    
    Solve(A, n);

    return 0;
}