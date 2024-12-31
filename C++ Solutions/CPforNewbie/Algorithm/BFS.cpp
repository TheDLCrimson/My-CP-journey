#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

bool visited[10001];
int *dist = new int[10001];
int n, m;

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
        
        cout << x << " "; 
        for (auto u : A[x]) 
        {
            if(visited[u])
                continue;
            visited[u] = true;
            Q.push(u);   
            dist[u] = dist[x] + 1;
        }
    }
   
}

main(void)
{
    int x, y, s;
    cin >> n >> m;
    vi A[n+1];
    for (int i = 0; i <= n; ++i)
        visited[i] = false;

    for (int i = 0; i < m; ++i)
    {
        cin >> x >> y;
        connect(A, x, y);
    }
    
    cin >> s;

    BFS(A, s);
  
    cout << "\n";
    for (int i = 1; i <= n; ++i)
        cout << "Node " << i << " - Distance: " << dist[i] << " \n";
    
    return 0;
}