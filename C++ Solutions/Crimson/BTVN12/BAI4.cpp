#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
using namespace std;
typedef pair<int, int> pii;

struct Point
{
    int x, y;
    int dis = 0;
};
Point start;
int m, n;
bool Mat[201][201];
bool Visited[201][201];
int land = 0, maxcurr = 0;
int Xaxis[4] = {0, 0, -1, 1};
int Yaxis[4] = {-1, 1, 0, 0};
map<pii, bool> IslandMax;
map<pii, bool> Island;

bool check(int x, int y)
{
    return( (x >= 0) && (x < m) && (y >= 0) && (y < n) && !Visited[x][y]);
}

void Scout(int x, int y)
{
    if (check(x, y) && Mat[x][y])
    {
        Visited[x][y] = true;
        Island[mp(x, y)] = true;
        //cout << x << " " << y << "\n";
        ++maxcurr;
        for (int d = 0; d < 4; ++d)
        {
            int nextX = x + Xaxis[d];
            int nextY = y + Yaxis[d];
            Scout(nextX, nextY);
        }
    }

    return;
}

void SearchIsland()
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            if (Mat[i][j] && !Visited[i][j])
            {
                Scout(i, j);
                if (land < maxcurr)
                {
                    IslandMax = Island;
                    land = maxcurr;
                }
                if (land == maxcurr)
                {
                    IslandMax.insert(Island.begin(), Island.end());
                }
                
                Island.clear();
                maxcurr = 0;
            }
        }
    //for (auto x : IslandMax)
    //    cout << x.first.first << " " << x.first.second << "\n";
    
}

int FindLand()
{
    queue<Point> Path;
    Path.push(start);
    
    while(!Path.empty())
    {
        Point curr = Path.front();
        Path.pop();

        for (int i = 0; i < 4; i++)
        {
            Point Next;
            Next.x = curr.x + Xaxis[i];
            Next.y = curr.y + Yaxis[i];
            if (check(Next.x, Next.y) && !Mat[curr.x][curr.y])
            {
                Visited[curr.x][curr.y] = true;
                Next.dis = curr.dis + 1;
                Path.push(Next);
            }
            else if (IslandMax[mp(Next.x, Next.y)])
            {
                //cout << curr.x << " " << curr.y << "\n";
                return curr.dis;
            }
        }   
    }

    return 0;
}

void Solve()
{
    SearchIsland();
    cout << FindLand();
}

main(void)
{
    freopen("BAI4.INP","r",stdin);
    freopen("BAI4.OUT","w",stdout);

    cin >> m >> n >> start.x >> start.y;
    start.x--; 
    start.y--;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> Mat[i][j];
            Visited[i][j] = false;
        }

    Solve(); 

    return 0;
}
