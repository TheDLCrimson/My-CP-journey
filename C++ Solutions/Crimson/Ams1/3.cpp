#include<bits/stdc++.h>

#define ll long long

using namespace std;

struct Dot
{
    ll x, v;
};

bool cmp(Dot A, Dot B)
{
    if (A.x != B.x)
        return A.x < B.x;
    
    return A.v < B.v;
}

main(void) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, t, des = 0;
    cin >> n;
    Dot *A = new Dot[n];
    for (ll i = 0; i < n; ++i)
        cin >> A[i].x >> A[i].v;
    
    sort(A, A + n, cmp);

    cin >> t;
   
    stack<Dot> S;
    for (ll i = 0; i < n; ++i)
    {
        if(A[i].v == 1)
            S.push(A[i]);
        else if (A[i].v == -1)
        {
            if (S.empty() || S.top().v == -1)
                S.push(A[i]);
            
            else
            {
                ll spot1 = S.top().x + (S.top().v * t);
                ll spot2 = A[i].x + (A[i].v * t);
                if (spot2 <= spot1)
                    S.pop();
                else
                    S.push(A[i]); 
            }
        }
    }

    cout << S.size();

    return 0;
}


