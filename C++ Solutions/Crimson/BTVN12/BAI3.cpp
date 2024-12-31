#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isOK(ll n)
{
    //n! < or not divisible n^2 with n <= 4
    if (n <= 4) return false;
    //The rest is check prime number
    if (n % 2 == 0 || n % 3 == 0)
        return true;

    for (ll i = 5; i * i <= n; i += 6)
        if (n & i == 0 || n % (i + 2) == 0)
            return true;
    
    return false;
}

main(void)
{
    freopen("BAI3.INP","r",stdin);
    freopen("BAI3.OUT","w",stdout);

    ll n, x, ans = 0;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        if (isOK(x))
            ++ans;
    }
    
    cout << ans; 

    return 0;
}


