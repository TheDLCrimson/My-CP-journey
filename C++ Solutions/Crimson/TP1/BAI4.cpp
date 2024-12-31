#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

bool visited[10002];
int *dist = new int[10002];
int n, m, x = 0, y = 0, broken;
map<pair<int, int>, int> Matrix;

void convert(char c)
{
    if (c == 'D')
        ++x;
    if (c == 'T')
        --x;
    if (c == 'N')
        --y;
    if (c == 'B')
        ++y;
}

void connect(vi *A, int x, int y)
{
    A[x].push_back(y);
    A[y].push_back(x);
    //cout << "conected " << x << " to " << y << "\n"; 
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
        if(x == broken)
            cout << dist[broken];
        //cout << x << " " << dist[x] << "\n";
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
    string S;
    cin >> S;

    n = S.length();
    vi A[n+2];
    
    for (int i = 0; i <= n+1; i++)
        visited[i] = false;
    
    Matrix[make_pair(0,0)] = 1;
    int d = 1, d2 = 1;  //d: the start node to move, update after moving; d2: find the visited node;
    for(int i = 0; i < n; ++i)
    {
        convert(S[i]);
        pair<int, int> spot;
        spot = make_pair(x, y);
        auto k = Matrix.find(spot);
        if(k != Matrix.end())
        {
            d2 = Matrix[spot];
            connect(A, d, d2);
            d = d2;
            continue;
        }
        Matrix[spot] = i + 2;
        connect(A, d, i + 2);
        d = i + 2;
        //cout << S[i] << ": " << d << " " << i + 2 << "\n";
    }
    broken = d;

    BFS(A, 1);
    //cout << broken << "\n";
    //for(auto u : A[1])
    //    cout << u << " ";
    //for(auto i = Matrix.begin(); i != Matrix.end(); ++i)
    //    cout << i->first.first << " " << i->first.second << " " << i->second << "\n";
    //cout << "\n";
    //for (int i = 1; i <= n; ++i)
    //   cout << "Node " << i << " - Distance: " << dist[i] << " \n";

    return 0;
}