#include<bits/stdc++.h>

#define ll long long

using namespace std;

void Solve(ll *A, ll n)
{
    ll maxSum = INT_MIN, cnt = 0;
    ll *DP = new ll[n];
    for (ll i = 0; i < n; ++i)
        DP[i] = A[i];
    for (ll i = 0; i < n; ++i)
    {
        if (i > 0)
            DP[i] = DP[i-1] + A[i];
        if(DP[i] < 0)
            DP[i] = 0;
        
        if (maxSum < DP[i])
        {
            maxSum = DP[i];
            cnt = 1;
        }
        else if (maxSum == DP[i])
            ++cnt;
    }
    //cout << maxSum << "\n";
    //for (ll i = 0; i < n; ++i)
    //    cout << DP[i] << " ";
    stack<ll> list;
    cout << maxSum << " " << cnt << "\n";
    for (ll i = 0; i < n; ++i)
    {
        if(maxSum == DP[i])
        {
            ll x = i;
            ll s = DP[i];
            while(s > 0)
            {
                list.push(A[x]);
                s -= A[x];
                --x;
            }
            while(!list.empty())
            {
                cout << list.top() << " ";
                list.pop();
            }
            cout << "\n";
        }
    }
}

main(void) 
{ 
    //freopen("BAI2.INP","r",stdin);
    //freopen("BAI2.OUT","w",stdout);
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    ll *A = new ll[n];
    for (ll i = 0; i < n; ++i)
        cin >> A[i];
    
    Solve(A, n);

    return 0;
}


