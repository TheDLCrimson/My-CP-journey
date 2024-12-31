#include<bits/stdc++.h>

#define ull unsigned long long

using namespace std;

main(void) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ull n, t;
    cin >> n;
    ull *A = new ull[n];
    ull *P = new ull[n];
    ull *DP = new ull[n];                                           
    for (ull i = 0; i < n; ++i)
        cin >> A[i];
    for (ull i = 0; i < n; ++i)   
        cin >> P[i];
    
    DP[0] = P[0] * A[0];
    ull minPrice = P[0];
    for (ull i = 1; i < n; ++i)
    {
        if (minPrice > P[i])
            minPrice = P[i];
        DP[i] = DP[i-1] + (minPrice * A[i]);
    }
    
    cout << DP[n-1];

    return 0;
}
