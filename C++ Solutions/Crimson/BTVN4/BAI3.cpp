#include<bits/stdc++.h>
using namespace std;

int Mat[1003][1003];
int m, n;

struct Point 
{ 
    int x;
    int y; 
    int dis = 0;
}; 

bool Check(Point A)
{
    return (A.x >= 0) && (A.x < m) && (A.y >= 0) && (A.y < n) && Mat[A.x][A.y] != 1;
}

void Solve(Point start, Point end)
{
    //Setting up--------- 
    queue<Point> Path;
    int ans = -1, ways = 0;
    Path.push(start);

    bool Visited[m][n];
    for(int i = 0; i < m; ++i)
        for(int j = 0; j < n; ++j)
            Visited[i][j] = false;
    Visited[start.x][start.y] = true;

    int Xaxis[4] = {1, 0, 0, -1};
    int Yaxis[4] = {0, 1, -1, 0};  
    //--------------------
    
    while(!Path.empty())
    {
        Point P = Path.front();
        Point curr = P;
        //cout<<curr.x<<" "<<curr.y<<" "<<curr.dis<<"\n";
        if(curr.x == end.x && curr.y == end.y)
        { 
            if(curr.dis == ans)
                ++ways;
            
            if(ways == 0)
            {
                ans = curr.dis;
                ++ways;
            }  
        }
        
        Path.pop();
        for (int i = 0; i < 4; ++i)
        {
            Point Next;
            Next.x = curr.x + Xaxis[i];
            Next.y = curr.y + Yaxis[i];

            if( Check(Next) && !Visited[Next.x][Next.y] )
            {
                //cout<<Next.x<<" "<<Next.y<<"\n";
                if( Mat[Next.x][Next.y] != 3)
                    Visited[Next.x][Next.y] = true;
                Next.dis = curr.dis + 1;
                Path.push(Next);
                
            }
        }
    
    }
    
    cout<<ans - 1<<"\n"<<ways;
}

main(void)
{
    
    //freopen("BAI3.inp","r",stdin);
	//freopen("BAI3.out","w",stdout);
    
    Point start, end;
    cin>>m>>n;
    
    for(int i = 0; i < m; ++i)
        for(int j = 0; j < n; ++j)
        {
            cin>>Mat[i][j];
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
