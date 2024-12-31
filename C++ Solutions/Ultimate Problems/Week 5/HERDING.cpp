#include<bits/stdc++.h>
 
#define vi vector<int>
#define vb vector<bool>
#define pii pair<int, int>
using namespace std;

int n, m;
vb visited(1000001, false);

void connect(vi *A, int x, int y)
{
    A[x].push_back(y);
    A[y].push_back(x);
}

void Scan(char C, int x, int y, vi *A)
{
    int a = x;
    int b = y;
    if (C == 'N')
        --a;
    if (C == 'E')
        ++b;
    if (C == 'W')
        --b;
    if (C == 'S')
        ++a;
  
    //if (a >= 1 && a <= n && b >= 1 && b <= m)
    connect(A, (x - 1) * m + y, (a - 1) * m + b); 
}

void DFS(vi *A, int s)
{
    if (visited[s])
        return;
    //cout << s << " ";
    visited[s] = true;
    for (auto x : A[s])
        DFS(A, x);
}

void Solve()
{
    cin >> n >> m;
    char Mat[n+1][m+1];
    vi *A = new vi[n*m+1];
    
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
        {
            cin >> Mat[i][j];
            Scan(Mat[i][j], i, j, A);
        }
    
    int ans = 0;
    for(int i = 1; i <= n * m ; ++i)
        if (!visited[i])
        {
            DFS(A, i);
            ++ans;
            //cout << "\n";
        }

    cout << ans;
}

main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    Solve();
        
    return 0;
}
