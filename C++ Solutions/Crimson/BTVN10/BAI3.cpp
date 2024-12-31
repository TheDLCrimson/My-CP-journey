#include <bits/stdc++.h>
#define ll long long
using namespace std;

//CODE BY CRIMSON XD

void Solve(vector<ll> A, ll n)
{
    ll maxSum = INT_MIN, cnt = 0;
    ll *DP = new ll[n];
    
    for(ll i = 0; i < n; ++i)
    {
        if (maxSum < A[i])
        {
            maxSum = A[i];
            cnt = 1;
        }
        else if (maxSum == A[i])
            ++cnt;
    }
    if(maxSum < 0)
    {
        for (ll i = 0; i < cnt; i++)
            cout << maxSum << "\n";
        return;
    }
    //----------------------------------

    for(ll i = 0; i < n; ++i)
        DP[i] = A[i];
    for(ll i = 0; i < n; ++i)
    {
        if(i > 0)
            DP[i] = DP[i-1] + A[i];
        if(DP[i] < 0)
            DP[i] = 0;
        if(DP[i] > maxSum)
        {
            maxSum = DP[i];
            cnt = 1;
        }
        else if(DP[i] == maxSum)
            ++cnt;
    }  
    cout << maxSum << " " << cnt << "\n";
    
    stack<ll> temp;
    for(ll i = 0; i < n; ++i)
    {
        if(maxSum == DP[i])
        {
            ll s = maxSum, j = i;
            while(s > 0)
            {
                s -= A[j];
                temp.push(A[j]);
                j--;
            }

            while(!temp.empty())
            {
                cout << temp.top() << " ";
                temp.pop();
            }
            cout << "\n";
        }
    }

}

main(void)
{
    //freopen("TongMax.inp","r",stdin);
    //freopen("TongMax.out","w",stdout);
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, x;
    vector<ll> A;
    cin >> n;
    for (ll i = 0; i < n; ++i)
    {
        cin >> x;
        A.push_back(x);
    }
    Solve(A, n);

    return 0;
}
