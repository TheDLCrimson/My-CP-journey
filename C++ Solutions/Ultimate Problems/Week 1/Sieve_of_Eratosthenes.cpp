#include<bits/stdc++.h>

#define ll long long
#define MAX 1000100

using namespace std;

vector<ll> PSieve;
bool *prime = new bool[MAX];

void sieve(ll n)
{

    prime[0] = false;
    prime[1] = false;
    for(ll i = 2; i <= n; i += 10)
    {
        prime[i] = true;    prime[i+1] = true;
        prime[i+2] = true;    prime[i+3] = true;
        prime[i+4] = true;    prime[i+5] = true;
        prime[i+6] = true;    prime[i+7] = true;
        prime[i+8] = true;    prime[i+9] = true;
    }

    for (ll i = 2; i <= n; ++i)
    {
        if (prime[i])
            PSieve.push_back(i);
        
        for (ll j = i * i; j <= n; j += i)
                prime[j] = false;  
    }
    //for (auto x : PSieve)
    //    cout << x << " ";
    //cout << "\n";
}

void solve(ll n, ll k)
{
    ll m;
    vector<ll> Num;
    for (ll i = 0; i < PSieve.size() - 1; ++i)
    {
        m = PSieve[i] + PSieve[i+1] + 1;
        if (prime[m] && m <= n)
            Num.push_back(m);
        if (m > n)
            break;
    }
    //for (auto x : Num)
    //    cout << x << " ";

    (k <= Num.size()) ? cout << "YES" : cout << "NO";
}

main(void)
{
    ll n, k;
    cin >> n >> k;

    sieve(n);

    solve(n, k);

    return 0;
}