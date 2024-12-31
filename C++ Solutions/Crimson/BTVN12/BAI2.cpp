#include<bits/stdc++.h>
#define ll long long
using namespace std;

main(void)
{
    freopen("BAI2.INP","r",stdin);
    freopen("BAI2.OUT","w",stdout);

    ll n, x, P1, P2;
    cin >> n;
    vector<ll> A;
    
    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        A.push_back(x);
    }
    
    sort(A.begin(), A.end());

    P1 = A[0] * A[1] * A[n-1];
    P2 = A[n-3] * A[n-2] * A[n-1]; 

    (P1 > P2) ? cout << P1 : cout << P2;

    return 0;
}


