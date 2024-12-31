#include<bits/stdc++.h>

using namespace std;
/*
long convert(long n)
{
    long bill[] = {1, 5, 10, 20, 100};
    long *DP = new long[n+1];
    DP[0] = 0;
    for (long i = 1; i <= n; ++i)
    {
        DP[i] = INT_MAX;
        for(auto b : bill)
        {
            if(i - b >= 0)
                DP[i] = min(DP[i], DP[i-b] + 1);
        }
    }
    
    return DP[n];
}
*/
main(void) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long n;
    cin >> n;
    //cout << convert(n);

    cout << n/100 + (n/20 % 5) + (n/10 % 2) + (n/5 %2)+ n%5;
    return 0;
}


