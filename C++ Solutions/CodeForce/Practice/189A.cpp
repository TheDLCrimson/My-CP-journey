#include<bits/stdc++.h>
 
#define ll long long
 
using namespace std;
 
ll maxPoint(ll *DP, ll n, ll maxNum)
{
    for (ll i = 2; i <= maxNum; ++i)
        DP[i] = max(DP[i] + DP[i-2], DP[i-1]);
    
    //for (ll i = 0; i <= maxNum; ++i)
    //    cout << DP[i] << " ";
    return DP[maxNum];
}
main(void) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    ll n, maxNum = 0;
    cin >> n;
    ll *DP = new ll[100001];
    
    fill(DP, DP + 100001, 0);

    for (ll i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        DP[x] += x;
        if(maxNum < x)
            maxNum = x;
    }
    
    cout << maxPoint(DP, n, maxNum);
    return 0;
}
 