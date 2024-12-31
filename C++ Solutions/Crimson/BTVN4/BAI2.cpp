#include<bits/stdc++.h> 
#define ll long long
using namespace std;

//ll LastPlayer_Recurr(ll n, ll k)
//{
//    if(n == 1)
//        return 1;
//        
//    return (LastPlayer(n-1, k) + k-1) % n + 1 ;
//}
 
ll LastPlayer(ll n, ll k)
{
    ll x = 0, last = 1;
    for(ll i = 2; i <= n; ++i)
        last = (last + k-1) % i + 1;
    
    return last;
}

main(void) 
{ 
    //freopen("BAI2.inp","r",stdin);
	//freopen("BAI2.out","w",stdout);
    
    ll n, k, m;
    cin >> n >> k >> m;

    ((LastPlayer(n, k) + m - 1) % n == 0) ? cout << n : cout << (LastPlayer(n, k) + m - 1) % n;
    
    return 0; 
} 
