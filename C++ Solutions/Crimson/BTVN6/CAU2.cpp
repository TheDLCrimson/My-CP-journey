#include<bits/stdc++.h>

using namespace std;

main(void)
{
    //freopen("CAU2.INP","r",stdin);
    //freopen("CAU2.OUT","w",stdout);

    int s, k, m, ans = 0;
    cin >> s >> k >> m;
    int x, y;

    if(k < m)
    {
        cout << "0";
        return 0;
    }

    while (s >= k)
    {
        x = s / k;
        s -= (x * k);
        y = k / m;
        ans += (x * y);
        s += ((k - m * y) * x);
    }
    
    cout << ans;

    return 0;
}