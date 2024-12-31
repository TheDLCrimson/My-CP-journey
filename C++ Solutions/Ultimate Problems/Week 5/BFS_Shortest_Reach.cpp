#include<bits/stdc++.h>
 
#define vi vector<int>
#define vb vector<bool>

using namespace std;

void connect(vi *A, int x, int y)
{
    A[x].push_back(y);
    A[y].push_back(x);
}

vi BFS(vi *A, int s, vb visited, int n)
{
    vi dist(n+1, -1);
    queue<int> Q;
    visited[s] = true;
    dist[s] = 0;
    Q.push(s);
    while(!Q.empty())
    {
        int x = Q.front();
        Q.pop();
        //cout << x << " ";
        for(auto u : A[x])
        {
            if(visited[u])
                continue;
            visited[u] = true;
            dist[u] = dist[x] + 1;
            Q.push(u);
        }
    }
    
    return dist;
}

void Solve()
{
    int n, m;
    cin >> n >> m;
    vi *A = new vi[n+1];
    vb visited(n+1, false);
    int x, y, s;
    for (int i = 0; i < m; ++i)
    {
        cin >> x >> y;
        connect(A, x, y);
    }
    cin >> s;
    vi dist = BFS(A, s, visited, n);
    for (int i = 1; i <= n; ++i)
    {
        if (i == s)
            continue;
        if (dist[i] == -1)
            cout << dist[i] << " ";
        if (dist[i] > 0)
            cout << dist[i] * 6 << " ";
    }
        cout << "\n";
    
}

main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int q;
    cin >> q;
    while (q--)
        Solve();
        
    return 0;
}
