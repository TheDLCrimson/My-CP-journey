#include<bits/stdc++.h>

using namespace std;

main(void)
{
    freopen("CAU1.INP","r",stdin);
    freopen("CAU1.OUT","w",stdout);

    int n, x, ans = 0;
    cin >> n;
    x = sqrt(n);

    for (int i = 1; i <= x; i++)
    {
        if(n % i == 0)
            ++ans;
    }
    
    if (x * x == n)
        ans = ans * 2 - 1;
    else    
        ans *= 2;

    cout << ans;

    return 0;
}