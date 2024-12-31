#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct player
{
    ll lvl;
    bool team;
};

bool comp(player a, player b)
{
    if (a.lvl != b.lvl)
        return a.lvl < b.lvl;
    return a.team > b.team;
}

ll Solve(player *A, ll n)  
{
    ll ans = 0, cnt = 0;
    for (ll i = 0; i < n; ++i)
    {
        if (!A[i].team)
            ++cnt;
        if (A[i].team && cnt != 0)
        {
            ++ans;
            --cnt;
        }
    }
    return ans;
}

//void check(player *A, ll n)  
//
//   for (ll i = 0; i < n; ++i)
//       cout << A[i].lvl << " ";
//   cout << "\n";
//   for (ll i = 0; i < n; ++i)
//       cout << A[i].team << " ";
//

main(void)
{
    ll n;
    cin >> n;
    
    player *List = new player[n * 2 + 1];
   
    for(ll i = 0; i < n; ++i) 
    {
        cin >> List[i].lvl;
        List[i].team = 0;
    }
    for(ll i = n; i < 2*n; ++i) 
    {
        cin >> List[i].lvl;
        List[i].team = 1;
    }

    sort(List, List + 2*n, comp);
    //check(List, 2*n);
    cout << Solve(List, 2*n);

    return 0;
}


