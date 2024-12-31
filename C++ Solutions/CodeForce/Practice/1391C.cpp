#include<bits/stdc++.h>
 
#define ull unsigned long long
 
using namespace std;
 
main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    const ull MOD = 1e9+7;
    ull n, fact = 1, pow2 = 1;
    cin >> n;
 
    for (ull i = 2; i <= n; i++)
    {
        fact = (fact * i) % MOD;
        pow2 = (pow2 * 2) % MOD;
    }
    
    //cout << fact << " " << pow2 << "\n";
    ull ans = (fact + MOD - pow2) % MOD;
    cout << ans;
    
    return 0;
}