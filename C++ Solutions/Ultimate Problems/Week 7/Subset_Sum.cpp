#include<bits/stdc++.h>

#define ll unsigned long long

using namespace std; 

void Solve(ll *A, ll n, ll sum)
{
    bool DP[n+1][sum+1];

    DP[0][0] = true;
    for (ll i = 1; i <= sum; ++i)
        DP[0][i] = false;

    for (ll i = 1; i <= n; ++i)
        for (ll j = 0; j <= sum; ++j)
        {
            if (A[i] > j || DP[i-1][j])
                DP[i][j] = DP[i-1][j];
            else
                DP[i][j] = DP[i-1][j - A[i]]; 
        }
    // CAN BE OPTIMIZED BY DP[2][sum+1] and DP[i%2][j] will solve the problems

    (DP[n][sum]) ? cout << "Targets Sighted\n" : cout << "Access Denied\n";

    //for (ll i = 0; i <= n; ++i)
    //{
    //    for (ll j = 0; j <= sum; ++j)
    //        cout << DP[i][j] << " ";
    //    cout << "\n";
    //}   
    
}

void Optimized(ll *A, ll n, ll sum)
{
    bool DP[2][sum+1];
    for (ll i = 1; i <= sum; ++i)
       DP[0][i] = false;
    
    for (ll i = 1; i <= n; ++i)
        for (ll j = 0; j <= sum; ++j)
        {
            if (A[i] > j || DP[(i-1)%2][j])
                DP[i%2][j] = DP[(i-1)%2][j];
            else
                DP[i%2][j] = DP[(i-1)%2][j - A[i]]; 
        }

    (DP[n%2][sum]) ? cout << "Targets Sighted\n" : cout << "Access Denied\n";
}

main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n, sum;
    cin >> n >> sum;
    ll *A = new ll[n+1];
    for (ll i = 1; i <= n; ++i)
        cin >> A[i];
    
    Solve(A, n, sum);
 
    return 0;
}