#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll Sum(ll *A, ll n)
{
    sort(A, A + n);
    
    ll t = A[0] + A[n-1];

    return t;
}

main(void)
{
    freopen("CAU3.inp","r",stdin);
    freopen("CAU3.out","w",stdout);

    ll n;
    cin >> n;
    ll *A = new ll[n];
  
    for (int i = 0; i < n; ++i)
        cin >> A[i];
  
    cout << Sum(A, n);

    return 0;
}
