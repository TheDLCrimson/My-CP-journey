#include<bits/stdc++.h>
#define ll long long
using namespace std;

main(void)
{
    map<ll, ll> Count;
    ll n, m;
    cin >> m >> n;
    ll *A = new ll[m];
    ll *B = new ll[n];
    vector<ll> C;

    for (ll i = 0; i < m; i++)
    {
        cin >> A[i];
        ++Count[A[i]];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> B[i];
        ++Count[B[i]];
    }
    
    for (auto x : Count)
        if (x.second > 1)
            C.push_back(x.first);

    for (ll i = 0; i < C.size(); i++)
    {
        cout << C[i] << " ";
    }
    

    return 0;
}


