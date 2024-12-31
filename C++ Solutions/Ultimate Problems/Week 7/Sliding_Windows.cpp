#include <bits/stdc++.h>
#define ll long long
using namespace std;

//CODE BY CRIMSON XD
int M;

void Kanade(vector<ll> A)
{
    ll curr = A[0], gen = A[0], start = 0; //currentSum & generalSum
    for (ll i = 1; i < A.size(); ++i)
    {
        if (A[i] > M)
        {
            start = i + 1;
            curr = 0;
            continue;
        }
        
        curr += A[i];
        while(curr > M && start < i)
        {
            curr -= A[start];
            ++start;
        }
        
        gen = max(gen, curr);
    }

    cout << gen;
}

main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, x;
    vector<ll> A;
    cin >> n >> M;
    for (ll i = 0; i < n; ++i)
    {
        cin >> x;
        A.push_back(x);
    }
        Kanade(A);

    return 0;
}
