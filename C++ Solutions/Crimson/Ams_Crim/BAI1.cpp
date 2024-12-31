#include<bits/stdc++.h>

#define ull unsigned long long

using namespace std;

void Solve(ull L, ull R)
{
    ull minN = INT_MAX;
    if(R - L >= 100)
    {
        cout << "0";
        return;
    }
    else
    {
        for (ull a = L; a < R; ++a)
            for (ull b = a + 1; b <= R; ++b)
            {
                ull u = a % 2020;
                ull v = b % 2020;
                ull m = (u * v) % 2020;
                if(u == 0 || v == 0)
                {
                    cout << "0";
                    return;
                }
                else 
                if(minN > m) 
                    minN = m;
                //cout << u << " " << v << "\n";
            }
           
    }
    cout << minN;

}

main(void)
{
    //freopen("BAI1.INP","r",stdin);
    //freopen("BAI1.OUT","w",stdout);

    ull L, R;
    cin >> L >> R;
   
    Solve(L, R);

    return 0;
}