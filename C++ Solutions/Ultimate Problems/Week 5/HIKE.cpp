#include<bits/stdc++.h>

#define MAX 55 

using namespace std;

int n;
struct Pieces
{
    int a, b, c;
};

void BFS(char Board[MAX][MAX], Pieces Move)
{
    int d[n+1][n+1][n+1];
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            for (int k = 1; k <= n; ++k)
                d[i][j][k] = INT_MAX;
    d[Move.a][Move.b][Move.c] = 0;
    
    queue<Pieces> Q;
    Q.push(Move);

    while(!Q.empty())
    {
        Move = Q.front();
        Q.pop();

        for (int i = 1; i <= n; ++i)
        {
            if(Board[Move.a][i] == Board[Move.b][Move.c] && d[i][Move.b][Move.c] > d[Move.a][Move.b][Move.c])
            {
                d[i][Move.b][Move.c] = d[Move.a][Move.b][Move.c] + 1;
                Pieces newMove = Move;
                newMove.a = i;
                Q.push(newMove);
            }
            
            if(Board[Move.b][i] == Board[Move.c][Move.a] && d[Move.a][i][Move.c] > d[Move.a][Move.b][Move.c])
            {
                d[Move.a][i][Move.c] = d[Move.a][Move.b][Move.c] + 1;
                Pieces newMove = Move;
                newMove.b = i;
                Q.push(newMove);
            }

            if(Board[Move.c][i] == Board[Move.a][Move.b] && d[Move.a][Move.b][i] > d[Move.a][Move.b][Move.c])
            {
                d[Move.a][Move.b][i] = d[Move.a][Move.b][Move.c] + 1;
                Pieces newMove = Move;
                newMove.c = i;
                Q.push(newMove);
            }
        
        }
    }
    // Need to find the min cost where all 3 pieces are at 1 spot so check all d[i][i][i]
    int Min = INT_MAX;
    for (int i = 1; i <= n; i++)
        Min = min(d[i][i][i], Min);
    
    (Min == INT_MAX) ? cout << "impossible\n" : cout << Min << "\n";
}

void Solve()
{
    Pieces Move;    // 1 Move a, b or c changes = new move and must update it
    cin >> Move.a >> Move.b >> Move.c;
    char Board[MAX][MAX];
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            cin >> Board[i][j];
    
    BFS(Board, Move);   //BFS to find the min cost of combination Moves 
}

main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    while (cin >> n && n)
        Solve();
        
    return 0;
}
