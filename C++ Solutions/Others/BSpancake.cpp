#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll BSearch(ll *A, ll l, ll r, ll x, ll n)  
{
	ll s = 0;
    ll mid = (l + r) / 2;
    for(int i = 0; i < n; i++)
        s += (mid / A[i]);
        
    if(s >= x && l == r)
        return mid;
        
    if(s >= x)
        return BSearch(A, l, mid, x, n); 
        
    if(s < x)
        return BSearch(A, mid + 1, r, x, n);
   
}

main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout.tie(NULL);
    
    ll n, x;
    cin>>x>>n;
    ll *A = new ll[n];
    for(int i = 0; i < n; i++)
        cin>>A[i];
    
    ll max = *max_element(A, A + n); 
    max = max * n;

    cout<<BSearch(A, 1, max, x, n);
    
    return 0;
}


