#include<bits/stdc++.h>
using namespace std;

#define ull unsigned long long 
typedef vector<ull> vi;

bool *visited = new bool[100001];
ull n, m, ans = 0, Min = INT64_MAX;
ull *Arr = new ull[100001];

void connect(vi *A, ull x, ull y)
{
    A[x].push_back(y);
    A[y].push_back(x);
}

void DFS(vi *A, ull s)
{
    Min = min(Min, Arr[s]);
    if(visited[s])
        return;
    visited[s] = true;
    //cout << s << " ";
    for(auto u : A[s])
        DFS(A, u);
}

main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ull x, y, s;
    cin >> n >> m;
    vi A[n+1];
    
    for (ull i = 1; i <= n; ++i)
    {
        cin >> Arr[i];
        visited[i] = false;
    }
    for(ull i = 0; i < m; ++i)
    {
        cin >> x >> y;
        connect(A, x, y);
    }
    
    for (ull i = 1; i <= n; ++i)
        if (!visited[i])
        {
            DFS(A, i);
            //cout << Min << "\n";
            ans += Min;
            Min = INT64_MAX;
        }

    cout << ans;

    return 0;
}