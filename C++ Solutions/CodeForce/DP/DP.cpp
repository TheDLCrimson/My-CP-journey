#include<bits/stdc++.h>

using namespace std;

main(void) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int *DP = new int[n+1];
    DP[1] = 0;
    for (int i = 2; i <= n; ++i)
    { 
        if (i % 2 == 0 && i % 3 != 0)
            DP[i] = 1 + min(DP[i - 1], DP[i / 2]);
        else if (i % 2 != 0 && i % 3 == 0)
            DP[i] = 1 + min(DP[i - 1], DP[i/3]);
        else if (i % 2 == 0 && i % 3 == 0)
            DP[i] = min(DP[i], min(DP[i/3], DP[i/2]));
        else
            DP[i] = 1 + DP[i-1];

    }
    
    cout << DP[n];

    return 0;
}


