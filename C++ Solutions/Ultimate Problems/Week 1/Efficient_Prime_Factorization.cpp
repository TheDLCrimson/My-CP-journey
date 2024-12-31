#include<bits/stdc++.h>

#define ll long long
#define MAX 1000015
using namespace std;

vector<ll> PSieve;
unordered_map<ll, ll> primeFactor;

void sieve()
{

    primeFactor[1] = 1;
    for(ll i = 2; i <= MAX; i += 10)
    {
        primeFactor[i] = i;          primeFactor[i+1] = i + 1;
        primeFactor[i+2] = i + 2;    primeFactor[i+3] = i + 3;
        primeFactor[i+4] = i + 4;    primeFactor[i+5] = i + 5;
        primeFactor[i+6] = i + 6;    primeFactor[i+7] = i + 7;
        primeFactor[i+8] = i + 8;    primeFactor[i+9] = i + 9;
    }

    for (ll i = 2; i <= MAX; ++i)
    {
        if (primeFactor[i] == i)
            for (ll j = i * i; j <= MAX; j += i)
                if (primeFactor[j] == j)
                    primeFactor[j] = i;  
    }
    
}

void solve(ll n)
{
    vector<ll> Num;
    cout << "1";
    while (n != 1)
    {
        Num.push_back(primeFactor[n]);
        n /= primeFactor[n];
    }
    for (auto i : Num)
        cout << " x " << i;
    cout << "\n";

}

main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n;
    sieve();
    while (cin >> n)
    {
        solve(n);
    }
    
    return 0;
}