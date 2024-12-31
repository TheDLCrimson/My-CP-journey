#include<bits/stdc++.h>

#define ull unsigned long long

using namespace std;
ull n, m, x, d = 0;
vector<ull> A;  
vector<ull> B;

ull BinSearch(ull x, ull l, ull r)
{
    if(l <= r)
    {
        ull mid = l + (r - l) / 2;
        if (A[mid] == x)
            return mid;
        if (x > A[mid] && x < A[mid+1])
            return mid;

        if (A[mid] < x)
            return BinSearchLower(x, mid + 1, r);
        if (A[mid] > x)
            return BinSearchLower(x, l, mid - 1);
    }
    return -1;
}

void Solve()
{
    for(auto x : B)
    {
        ull spot = BinSearchLower(x, 0, n);
        
        else
        {
            return;
        }
        
    }
}

main(void) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //freopen("BAI2.INP","r", stdin);
    //freopen("BAI2.OUT","w", stdout);
    
    cin >> n >> m;
                                             
    for (ull i = 0; i < n; ++i)
    {
        cin >> x;
        A.push_back(x);
    }
        
    for (ull i = 0; i < m; ++i)   
    {
        cin >> x;
        B.push_back(x);
    }
    
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    Solve();

    cout << d;

    return 0;
}

