#include <bits/stdc++.h>
#define ll long long
using namespace std;

void Solve(string X, ll n)
{
    string S = X.substr(X.size() - n, n) + X.substr(0, X.size() - n);

    cout << S;
}

main(void)
{
    //freopen("BAI3.inp","r",stdin);
    //freopen("BAI3.out","w",stdout);

    ll n;
    cin >> n;
    string X;
    cin >> X;
    n %= X.length();
    Solve(X, n);

    return 0;
}
