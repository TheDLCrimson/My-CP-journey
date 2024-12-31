#include<bits/stdc++.h> 
using namespace std; 

#define ll long long

struct Point 
{ 
    ll x, y; 
}; 
  
main(void) 
{ 
    Point *A = new Point[100000]; 
    struct Point M;
  

    ll n, j, a, b;
    cin>>n>>j;
    cin>>M.x>>M.y;

    for (ll i = 0; i < n; i++)
        cin>>A[i].x>>A[i].y;
    
	j = j % (n*2);
    for(ll i = 0; i < j; i++)
    {
        a = (A[i%n].x * 2) - M.x;
        b = (A[i%n].y * 2) - M.y;
        M.x = a;
        M.y = b;
    }

    cout<<M.x<<" "<<M.y;

    return 0; 
} 