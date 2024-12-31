#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

bool visited[1000001];
int *DP = new int DP[1000001];
int n;

void connect(vi *A, int x, int y)
{
    A[x].push_back(y);
    A[y].push_back(x);
}

void DFS(vi *A, int s, int parent)
{
    if(visited[s])
        return;
    visited[s] = true;
    cout << s << " ";
    bool flag = 1;
    for(auto u : A[s])
    {
        if(u != parent)
        {
            flag = 0;
            DFS(A, u);
            DP[s] = DP[u] + 1;
            if(A[s].size() >= 2)
                DP[s] *= 
        }
    }
        
    if (flag)
        DP[s] = 1;


}

main(void)
{
    int x, y, s;
    cin >> n;
    vi A[n+1];
    for (int i = 0; i <= n; ++i)
        visited[i] = false;

    for(int i = 0; i < n - 1; ++i)
    {
        cin >> x;
        connect(A, x, i + 1);
    }
    
    cin >> s;

    DFS(A, s, 0);

}