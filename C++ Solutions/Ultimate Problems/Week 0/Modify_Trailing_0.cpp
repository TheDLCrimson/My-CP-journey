#include<bits/stdc++.h>

#define ll unsigned long long

using namespace std;

ll factFive(ll n)
{
    ll res = 0;
    for (ll i = 5; i <= n; i *= 5)
        res += (n / i);

    return res;
}

ll factTwo(ll n)
{
    ll res = 0;
    for (ll i = 2; i <= n; i *= 2)
        res += (n / i);

    return res;
}

void Solve(string S)
{
    unordered_map<char, ll> Set;
    ll minus_2 = 0, plus_2 = 0;
    ll minus_5 = 0, plus_5 = 0;
    for (ll i = 0; i <= S.length(); ++i)
        Set[S[i]] += 1; 
    
    for (auto x : Set)
    {
        minus_2 += factTwo(x.second);
        minus_5 += factFive(x.second);
    }
    plus_2 = factTwo(S.length());
    plus_5 = factFive(S.length());

    cout << min(plus_2 - minus_2, plus_5 - minus_5);
}

main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string S;
    cin >> S;

    Solve(S);
    
    return 0;
}