#include<bits/stdc++.h>

#define ll long long

using namespace std;

void Solve(ll n)
{
    ll ans = 0;
    for (ll i = 2; i < sqrt(n) ; i++)
    {
        if (n % i == 0)
        {
            ll j = n / i;
            //cout << i << " " << j << "\n";
            if (i % 2 == 0 && j % 2 == 0)
                continue;
            else if (i % 2 != 0 && j % 2 != 0 && i < j)
                ans += 2;
            else 
                ++ans;
        }
    }
    
    if (n % 2 == 0)
        ++ans;
    else 
        ans += 2;
    
    cout << ans;
}

main(void)
{
    //freopen("BAI1.INP","r",stdin);
    //freopen("BAI1.OUT","w",stdout);

    ll n;
    cin >> n;
   
    Solve(n);

    return 0;
}