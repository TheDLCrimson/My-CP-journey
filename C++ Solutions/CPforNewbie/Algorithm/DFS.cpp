#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

bool visited[10000];
int n, m;

void connect(vi *A, int x, int y)
{
    A[x].push_back(y);
    A[y].push_back(x);
}

void DFS(vi *A, int s)
{
    if(visited[s])
        return;
    visited[s] = true;
    cout << s << " ";
    for(auto u : A[s])
        DFS(A, u);
}

main(void)
{
    int x, y, s;
    cin >> n >> m;
    vi A[n+1];
    for (int i = 0; i <= n; ++i)
        visited[i] = false;

    for(int i = 0; i < m; ++i)
    {
        cin >> x >> y;
        connect(A, x, y);
    }
    
    cin >> s;

    DFS(A, s);

}