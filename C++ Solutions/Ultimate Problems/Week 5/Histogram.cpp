#include<bits/stdc++.h>
#define ll long long

using namespace std;

main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    ll *A = new ll[n];
    stack<ll> S;
    ll i = 0, area = -1, top, maxArea = -1;
    //cout << maxArea;
    for (ll i = 0; i < n; ++i)
    {
        cin >> A[i];
        if (A[i-1] <= A[i] || i == 0)
        {
            S.push(i);
            continue;
        }
        else while (!S.empty() && A[S.top()] > A[i])
        {
            top = S.top();
            S.pop();
            if(S.empty())
                area = A[top] * i;
            else
                area = A[top] * (i - S.top() - 1);

            maxArea = max(area, maxArea);
        }
        S.push(i);
        //cout << top << "\n";
    }
    
    while(!S.empty())
    {
        top = S.top();
        S.pop();
        if(S.empty())
            area = A[top] * n;
        else
            area = A[top] * (n - S.top() - 1);
    
        maxArea = max(area, maxArea);
        //cout << top << "\n";
    }
        
    cout << maxArea;
    return 0;
}
