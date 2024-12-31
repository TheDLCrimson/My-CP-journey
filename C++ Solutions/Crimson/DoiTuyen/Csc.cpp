#include <bits/stdc++.h>
#define ll long long
using namespace std;

//CODE BY CRIMSON XD

void solve(vector<ll> A, ll d)
{
    ll maxLen = 0;
    vector< vector<ll> > List;
    vector<ll> temp;
    for (ll i = 1; i < A.size(); ++i)
    {
        
        if (A[i] - d != A[i - 1])
        {
            temp.clear();
            continue;
        }
        else
        {
            if (temp.empty())
                temp.push_back(A[i-1]);
            temp.push_back(A[i]);
        }
        
        if (temp.size() > maxLen)
        {
            maxLen = temp.size();
            List.clear();
            List.push_back(temp);
        }
        else if (temp.size() == maxLen)
            List.push_back(temp);
        
    }
    cout << maxLen << " " << List.size() << "\n";

    for (auto i : List)
    {
        for (auto x : i)
            cout << x << " ";
        cout << "\n";
    }
}

main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, x, d;
    vector<ll> A;
    cin >> n >> d;
    for (ll i = 0; i < n; ++i)
    {
        cin >> x;
        A.push_back(x);
    }
    solve(A, d);

    return 0;
}
