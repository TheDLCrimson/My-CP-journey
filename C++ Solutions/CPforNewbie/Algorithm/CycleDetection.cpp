#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

bool *visited = new bool[10001];
bool *cycle = new bool[10001];
int *dist = new int[10001];
int n;
bool ck = false;

void connect(vi *A, int x, int y)
{
    A[x].push_back(y);
}

void DFS(vi *A, int s, int parent)
{
    if (cycle[s])
    {
        ck = true;
        return;
    }
    
    if (visited[s] || ck)
        return;
    
    visited[s] = true;
    cycle[s] = true;
    //cout << s << " ";
    for (auto x : A[s])
        if (x != parent)
            DFS(A, x, s);

    cycle[s] = false;
}

main(void)
{
    int x;
    cin >> n;
    vi A[n+1];

    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        connect(A, i + 1 , x);
        visited[i] = false;
        cycle[i] = false;
    }
    visited[n] = false;
    cycle[n] = false;

    for (int i = 1; i <= n; ++i)
    {
        if(!visited[i])
            DFS(A, i, 0);
        if(ck)
            break;
    }

    (ck) ? cout << "YES" : cout << "NO";
    
    return 0;
}