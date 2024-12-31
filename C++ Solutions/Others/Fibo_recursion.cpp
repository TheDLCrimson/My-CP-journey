#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll fibo(ll n)
{
    if(n == 1)
        return 0;
    if(n == 2)
        return 1;

    return fibo(n - 1) + fibo(n - 2);
}

main(void)
{
    ll n;
    while(cin >> n)
        cout << fibo(n) << "\n";
    
    return 0;
}
// 1 2 3 4 5 6 7
// 0 1 1 2 3 5 8