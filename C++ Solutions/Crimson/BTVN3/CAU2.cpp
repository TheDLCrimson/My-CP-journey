#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll LCM(ll a, ll b)
{
    ll p = a * b;
    if(a < b) swap(a, b);
    while (b != 0)
    {
        a %= b;
        swap(a, b);
    }
    
    return p / abs(a);
}

ll ANS(ll k, ll m, ll n)
{
    return ( n/k + n/m - n/LCM(k, m) );
}


main(void)
{
    freopen("CAU2.inp","r",stdin);
    freopen("CAU2.out","w",stdout);

    ll k, m, n, C = 0;
    cin >> k >> m >> n;
  
    cout << ANS(k, m, n);

    return 0;
}
