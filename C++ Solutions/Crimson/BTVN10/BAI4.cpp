#include<bits/stdc++.h>

#define ll long long

using namespace std;

//CODE BY CRIMSON XD

void Solve(vector<ll> A, ll k, ll n)
{
    ll *DP = new ll[n + 1], sum;
    vector<ll> L;
    vector<ll> R;
    DP[0] = 0;
    for (ll i = 1; i <= n; ++i)
        DP[i] = DP[i-1] + A[i-1];
    //for(ll i = 0; i <= n; ++i)
    //    cout << DP[i] << " ";
    //cout << "\n";
    for(ll i = 0; i < n; ++i)
        for(ll j = i + 1; j <= n; ++j)
        {
            sum = DP[j] - DP[i];
            if(sum % k == 0)
            {
                //cout << DP[i + 1] << " " << DP[j] << " " << i + 1 << " " << j << "\n";
                L.push_back(i);
                R.push_back(j);
            }
        }
    
    for(ll i = 0; i < L.size(); ++i)
    {
        for(ll j = L[i]; j < R[i]; ++j)
            cout << A[j] << " ";
        cout << "\n";
    }
    
}

main(void)
{
    freopen("dayconchiam.inp","r",stdin);
    freopen("dayconchiam.out","w",stdout);
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n, x, k;
    cin >> n >> k;
    vector<ll> A;

    for (ll i = 0; i < n; ++i)
    {   
        cin >> x;
        A.push_back(x);
    }
    
    Solve(A, k, n);

    return 0;
}