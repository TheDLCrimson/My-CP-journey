#include<bits/stdc++.h>

#define ll unsigned long long

using namespace std; 

string Mul (string A, ll n)
{   
    ll a = A.length();
    vector<ll> mul(a, 0);
    string S = "";

    for (ll i = 0; i < a; i++)
            mul[i] += ((ll)A[i] - '0') * n;
            
    for (ll i = mul.size() - 1; i > 0; --i)
    {
        mul[i - 1] += (mul[i] / 10);
        mul[i] %= 10;
        S = (char)(mul[i] + '0') + S;
    }
    while (mul[0] > 0)
    {
        S = (char)((mul[0] % 10) + '0') + S;
        mul[0] /= 10;
    }

    while(S[0] == '0' && S.length() > 1) 
        S.erase(0, 1);
    
    return S;
}

void Fact(ll n)
{
    string S = "1";
    for (ll i = 2; i <= n; ++i)
        S = Mul(S, i);
    
    cout << S;
}

main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n;
    cin >> n;

    Fact(n);
 
    return 0;
}