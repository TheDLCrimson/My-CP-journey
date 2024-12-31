#include<bits/stdc++.h>

#define ull unsigned long long

using namespace std;

struct AC
{
    ull p, v;
};

bool cmp(AC a, AC b)
{
    if (a.v != b.v)
        return a.v < b.v;
    
    return a.p < b.p;
}

main(void) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ull n, m, t, sum = 0;
    
    cin >> n;
    ull *A = new ull[n];                             
    for (ull i = 0; i < n; ++i)
        cin >> A[i];
    
    cin >> m;
    AC *P = new AC[m];
    for (ull i = 0; i < m; ++i)   
        cin >> P[i].p >> P[i].v;
    
    sort(A, A + n);
    sort(P, P + m, cmp);
    ull j = 0;
    for (ull i = 0; i < n; ++i)
    {
        
        if (A[i] <= P[j].p)
            sum += P[j].v;
        else
        {
            while (A[i] > P[j].p)
                j++;
            
            sum += P[j].v;
        }
        
    }
    
    cout << sum;

    return 0;
}
