#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> A(n);
    for (ll i = 0; i < n; ++i)
        cin >> A[i];
    vector<ll> dp(x+1, INT_MAX);
    dp[0] = 0;
    for (ll i = 1; i <= x; ++i)
        for (auto c : A)
        {
            if (i >= c)
                dp[i] = min(dp[i-c] + 1, dp[i]);
        }

    (dp[x] != INT_MAX) ? cout << dp[x] : cout << "-1";
}