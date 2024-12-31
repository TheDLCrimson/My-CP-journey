#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

bool visited[10000];
int n, m;
string S;
vector< pair<string, int> >List;

void connect(vi *A, int x, int y)
{
    A[x].push_back(y);
    A[y].push_back(x);
}

void DFS(vi *A, int s, string str, int parent)
{
    if(visited[s])
        return;
    visited[s] = true;
    str = str + S[s-1];
    //cout << s << " ";
    bool flag = 1;
    for (auto u : A[s])
        if (u != parent)
        {
            flag = 0;
            DFS(A, u, str, s);
        }
    
    if (flag)
        List.push_back( make_pair(str, s) );
}

main(void)
{
    //freopen("BAI4.INP","r",stdin);
    //freopen("BAI4.OUT","w",stdout);
    
    int x, y, s;    
    cin >> n;
    cin >> S;
    vi A[n+1];
    for (int i = 1; i <= n; ++i)
        visited[i] = false;

    for(int i = 0; i < n - 1; ++i)
    {
        cin >> x >> y;
        connect(A, x, y);
    }

    string str = "";
    DFS(A, 1, str, 0);

    sort(List.begin(), List.end());

    cout << List.size() << "\n";
    for(auto t : List)
        cout << t.second << " ";
}