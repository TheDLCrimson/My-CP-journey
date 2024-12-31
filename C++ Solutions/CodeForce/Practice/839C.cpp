#include<bits/stdc++.h>
using namespace std;
 
#define ull unsigned long long 
#define ld long double
typedef vector<ull> vi;
 
bool *visited = new bool[100001];
ull n;
ld *DP = new ld[100001];
 
void connect(vi *A, ull x, ull y)
{
    A[x].push_back(y);
    A[y].push_back(x);
}
 
void DFS(vi *A, ull s, ull parent)
{
    if(visited[s])
        return;
    visited[s] = true;
    //cout << s << " ";
    bool flag = true;
    
    for (auto x : A[s])
        if (x != parent)
        {
            flag = false;
            DFS(A, x, s);
            DP[s] += (ld)(DP[x] + 1);
        }
 
    if (flag)
        DP[s] = 0;
    else
        DP[s] /= (ld)(A[s].size() - (parent != 0));
 
}
 
main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ull x, y, s;
    cin >> n;
    vi A[n+1];
    
    for(ull i = 1; i <= n - 1; ++i)
    {
        cin >> x >> y;
        connect(A, x, y);
        visited[i] = false;
    }
    visited[n] = false;
    
    DFS(A, 1, 0);
           
    cout << setprecision(7) << fixed << DP[1];
 
    return 0;
}