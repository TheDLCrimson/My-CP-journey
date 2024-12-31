#include<bits/stdc++.h>
#define ll long long
#define vll vector<ll>
using namespace std;

//CODE BY CRIMSON XD

main(void)
{
    freopen("tuongho.inp","r",stdin);
	freopen("tuongho.out","w",stdout);
    
    ll n;
    cin >> n;
    vll X, Y, T;
    for(ll i = 0; i <= 10; i+=2)
        X.push_back(i);
    for(ll i = 1; i <= 6; ++i)
        Y.push_back(i); 
    
    //for(ll i = 0; i <= 6; ++i)
    //  cout << X[i] << " ";

    T.push_back(X[0] + Y[0]);
    for(ll i = 1; i <= 5; ++i)
        T.push_back(T[i-1] + X[i] + Y[i]);
    
    for(ll i = 6; i <= n-1; ++i)
    {
        X.push_back(X[i-6] - Y[i-4] + X[i-3] + Y[i-1]);
        Y.push_back(Y[i-6] - X[i-4] + Y[i-3] + X[i-1]);
        T.push_back(T[i-1] + X[i] + Y[i]);
    }

    cout << T[n-1];

    return 0;
}

