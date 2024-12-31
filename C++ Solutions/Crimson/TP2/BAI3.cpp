#include<bits/stdc++.h> 

#define ull unsigned long long

using namespace std; 

const ull MAX = 1000001;
ull block;
struct Query
{
    ull l, r, id;
};

bool cmp(Query A, Query B)
{   
    if (A.l / block != B.l / block)
        return A.l / block < B.l / block;
    
    return A.r < B.r;
}
  
main(void) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ull n, t, L, R, max = 0;
    cin >> n >> t;
    ull *cnt = new ull[MAX];
    ull *A = new ull[n];
    ull *ans = new ull[t];
    for (ull i = 0; i < n; ++i)
    {
        cin >> A[i];
        cnt[A[i]] = 0;
    }
    Query *Q = new Query[t+1];
    for (ull i = 0; i < t; ++i)
    {
        cin >> Q[i].l >> Q[i].r;
        Q[i].id = i;
    }
    block = sqrt(n);
    sort(Q, Q + t, cmp);

    
    ull left = 0, right = 0, sum = 0;
    for (ull i = 0; i < t; i++)
    {
        L = Q[i].l - 1;
        R = Q[i].r - 1;
        while (right <= R)
        {
            sum += (2*cnt[A[right]]*A[right] + A[right]);
            ++cnt[A[right]];
            ++right;
        }
        while (right > R + 1)
        {
            --cnt[A[right-1]];
            sum -= (2*cnt[A[right-1]]*A[right-1] + A[right-1]);
            --right;
        }    
        while (left < L)
        {
            --cnt[A[left]];
            sum -= (2*cnt[A[left]]*A[left] + A[left]);
            ++left;
            
        }
        while (left > L)
        {
            sum += (2*cnt[A[left-1]]*A[left-1] + A[left-1]);
            ++cnt[A[left-1]];
            --left;
        }
        
        ans[Q[i].id] = sum;
        //cout << sum << "\n";
    }
    
    for (ull i = 0; i < t; ++i)
        cout << ans[i] << "\n";
  
    return 0; 
} 