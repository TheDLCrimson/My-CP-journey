#include<bits/stdc++.h>

#define ll long long
#define MAX 1005

using namespace std;

ll A[MAX][MAX];
bool visited[MAX][MAX];
ll n, m;

struct Point 
{ 
    ll x, y;
    ll dis;
}; 

unordered_map<ll, vector<Point> > Linked;

bool Check(Point P)
{
    return ( (P.x > 0) && (P.x <= n) && (P.y > 0) && (P.y <= m) && A[P.x][P.y] != 0 && !visited[P.x][P.y] );
}

ll Solve(Point start, Point end)
{
    start.dis = 0;
    queue<Point> Q;
    Q.push(start);
    visited[start.x][start.y] = true;

    ll Xaxis[4] = {1, 0, 0, -1};
    ll Yaxis[4] = {0, 1, -1, 0}; 

    while(!Q.empty())
    {
        Point P = Q.front();
        Q.pop();

        if (P.x == end.x && P.y == end.y)
            return P.dis;
        
        for (auto i : Linked[A[P.x][P.y]])
        {
            if (Check(i))
            {
                Point Next;
                Next.x = i.x;
                Next.y = i.y;
                Next.dis = P.dis + 1;
                visited[Next.x][Next.y] = true;
                Q.push(Next);
            
            } 
        }
        
        for (ll i = 0; i < 4; ++i)
        {
            Point Next;
            Next.x = P.x + Xaxis[i];
            Next.y = P.y + Yaxis[i];

            if (Check(Next))
            {
                Next.dis = P.dis + 1;
                visited[Next.x][Next.y] = true;
                Q.push(Next);
            }
        }

    
    }

}

main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    Point start, end;
    cin >> start.x >> start.y >> end.x >> end.y;

    for (ll i = 1; i <= n; ++i)
        for (ll j = 1; j <= m; ++j)
        {
            visited[i][j] = false;
            cin >> A[i][j];
            Point P;
            P.x = i;
            P.y = j;
            Linked[A[i][j]].push_back(P);
        }

    cout << Solve(start, end);

    return 0;
}
