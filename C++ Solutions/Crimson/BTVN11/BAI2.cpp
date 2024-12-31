#include<bits/stdc++.h>
#define ll long long
#define mp make_pair

using namespace std;
typedef pair<int, int> pii;

int Mat[101][101];
int n, m;

struct Point
{
    int dis = 0;
    int x, y;
};

bool check(Point A)
{
    return ( (A.x >= 0) && (A.x < m) && (A.y >= 0) && (A.y < n) && (Mat[A.x][A.y] != 1) );
}

void Solve(Point start, Point end)
{
    int ans;
    bool Visited[m][n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            Visited[i][j] = false;
    int Xaxis[4] = {0, 0, -1, 1};
    int Yaxis[4] = {1, -1, 0, 0};
    queue<Point> Scout;
    Scout.push(start);
    map<pii, pii> Link;
    Link[mp(start.x, start.y)] = mp(-1, -1);
    stack<pii> Path;
    //-----------------------------

    while(!Scout.empty())
    {
        Point curr = Scout.front();
        Scout.pop();
        //cout<<curr.x<<" "<<curr.y<<" "<<curr.dis<<" "<<Mat[curr.x][curr.y]<<"\n";

        if (Mat[curr.x][curr.y] == 3)
        {
            ans = curr.dis + 1;
            
            pii track = mp(curr.x, curr.y);
            Path.push(track);
            while(Link[track] != mp(-1, -1))
            {
                Path.push(Link[track]);
                track = Link[track];
            }
                
            break;
        }
        
        //-------------------------------------------------
        
        for (int i = 0; i < 4; i++)
        {
            Point Next;
            Next.x = curr.x + Xaxis[i];
            Next.y = curr.y + Yaxis[i];

            if(check(Next) && !Visited[Next.x][Next.y])
            {
                //cout<<Next.x<<" "<<Next.y<<" "<<Next.dis<<" "<<Mat[Next.x][Next.y]<<"\n";
                Visited[curr.x][curr.y] = true;
                Next.dis = curr.dis + 1;
                Link[mp(Next.x, Next.y)] = mp(curr.x, curr.y);
                Scout.push(Next);
            }
        }
    }    
    //---------------------------------------------------------

    cout << ans << "\n";
    while (!Path.empty())
    {
        cout << Path.top().first + 1 <<" "<< Path.top().second + 1 << "\n";
        Path.pop();
    }
    
}

main(void)
{
    freopen("BAI2.INP","r",stdin);
    freopen("BAI2.OUT","w",stdout);
    
    Point start, end;
    
    cin >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> Mat[i][j];
            
            if (Mat[i][j] == 2)
            {
                start.x = i;
                start.y = j;
            }
            if (Mat[i][j] == 3)
            {
                end.x = i;
                end.y = j;
            }
        }
    
    Solve(start, end);

    return 0;
}


