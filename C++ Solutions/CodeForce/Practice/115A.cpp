#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

bool visited[10001];
int *dist = new int[10001];
int n, Max = 0;
vi pos;

void connect(vi *A, int x, int y)
{
    A[x].push_back(y);
    A[y].push_back(x);
}

void BFS(vi *A, int s)
{
    queue<int> Q;
    Q.push(s);
    dist[s] = 0;

    while(!Q.empty())
    {
        int x = Q.front();
        Q.pop();
        visited[x] = true;
        
        //cout << x << " "; 
        for (auto u : A[x]) 
        {
            if(visited[u])
                continue;
            visited[u] = true;
            Q.push(u);   
            dist[u] = dist[x] + 1;
            Max = max(Max, dist[u]);
        }
    }
   
}

main(void)
{
    int x;
    cin >> n;
    vi A[n+1];
    for (int i = 0; i <= n; ++i)
        visited[i] = false;

    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        if (x != -1)
            connect(A, i + 1 , x);
        else
            pos.push_back(i + 1);
    }

    for (auto s : pos)
        BFS(A, s);

    cout << Max + 1;
    
    return 0;
}