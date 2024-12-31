#include <bits/stdc++.h>

using namespace std;

#define ll long long
typedef vector<bool> vb;

void Search(vb A)
{
    ll t = 0, ans, maxim = 0, base;
    while(t < A.size())
    {
        ans = 0, base = 1;
        for(ll i = 0; i < A.size(); ++i)
        {
            if(A[i])
                ans += A[i] * base;
            base *= 2;
        }
        
        if(maxim < ans)
            maxim = ans;

        bool x = A[0];
        A.erase(A.begin());
        A.push_back(x);
        ++t;
    }

    if(maxim < ans)
        maxim = ans;
    cout << maxim;
}

void Solve(ll n)
{
    ll len = 0;
    vb A;

    while(n > 0)
    {
        A.push_back(n % 2);
        n /= 2;
    }

    for(ll i = A.size() - 1; i >= 0; --i)
        cout << A[i];
    
    cout << "\n";

    Search(A);
}

main(void)
{
    //freopen("CAU4.inp","r",stdin);
    //freopen("CAU4.out","w",stdout);

    ll num;
    cin >> num;

    Solve(num);
    
    return 0;
}
