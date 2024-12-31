#include<bits/stdc++.h>
#define ll long long
using namespace std;


main(void)
{
    string A = "ISP";
    
    ll n;
    cin >> n;
    string *B = new string[n];
    B[0] = "";
    ll x = n / 3;
    ll y = n % 3;
    for (ll i = 0; i < x; ++i)
        B[0] = B[0] + A; 
    for (ll i = 0; i < y; ++i)
        B[0] = B[0] + A[i];
    
    string C = B[0];
    reverse(C.begin(), C.end());
    C.erase(0, 1);
    B[0] = B[0] + C;
    
    cout << B[0] << "\n";
    for(ll i = 1; i < n; ++i)
    {
        B[i] = B[i-1];
        B[i].erase(n-1, 2);
        B[i] = ' ' + B[i];
        cout << B[i] << "\n";
    }
    for(ll i = n - 2; i >= 0; --i)
        cout << B[i] << "\n";
    
    return 0;
}


