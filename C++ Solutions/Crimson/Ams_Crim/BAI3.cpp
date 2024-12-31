#include<bits/stdc++.h>

#define ull unsigned long long

using namespace std;
vector<ull> List;
const ull m =  998244353;
ull allWays(ull n)
{
    ull *DP = new ull[n+1];
    DP[0] = 1;
    bool first = true;
    for (ull i = 1; i <= n; ++i)
    {
        DP[i] = 0;
        for(auto d : List)
        {
            if(i > d)
            {
                DP[i] += DP[i - d];
                DP[i] %= m;
            }
            else if(i == d && first)
            {
                DP[i] += DP[i - d];
                DP[i] %= m;
                first = false;
            }
            
        }
    }

    return DP[n];
    //for (ull i = 0; i <= n; ++i)
        //cout << DP[i] << " ";
}

main(void)
{
    //freopen("BAI3.INP","r",stdin);
    //freopen("BAI3.OUT","w",stdout);
   
    ull n, k, l, r;
    cin >> n >> k;

    for (ull i = 0; i < k; ++i)
    {
        cin >> l >> r;
        for (ull j = l; j <= r; ++j)
            List.push_back(j);
    }

    sort(List.begin(), List.end());

    //for(auto t : List)
    //    cout << t << " ";
    cout << allWays(n);

    return 0;
}