#include <bits/stdc++.h>
#define ll long long
using namespace std;

//CODE BY CRIMSON XD

void Kanade(vector<ll> A)
{
    ll curr = A[0], gen = A[0];
    for (ll i = 1; i < A.size(); ++i)
    {
        curr += A[i];
        curr = max(A[i], curr);
        gen = max(gen, curr);
    }

    (gen > 0) ? cout << "The maximum winning streak is " << gen << ".\n"
              : cout << "Losing streak.\n";
}

main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, x;
    vector<ll> A;
    while (cin >> n && n != 0)
    {
        for (ll i = 0; i < n; ++i)
        {
            cin >> x;
            A.push_back(x);
        }
        Kanade(A);
        A.clear();
    }

    return 0;
}
