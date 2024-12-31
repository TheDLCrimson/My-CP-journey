#include<bits/stdc++.h>
using namespace std;

int M[201][201];
int m, n, res = 0, type1 = 0, type2 = 0;

void GoRound(int x, int y)
{
    int nextX = x;
    int nextY = y;

    //Go Right
    while(M[nextX][nextY] == 1)
    {
        if(M[nextX-1][nextY] == 1)
            return; 
        nextX += 0;
        nextY += 1;
    }
    nextY--;

    //Go Down
    while(M[nextX][nextY] == 1)
    {
        if(M[nextX][nextY+1] == 1)
            return; 
        nextX += 1;
        nextY += 0;
    }
    nextX--;

    int endX = nextX;
    int endY = nextY;

    //Go Left    
    while(M[nextX][nextY] == 1)
    {
        if(M[nextX+1][nextY] == 1)
            return; 
        nextX += 0;
        nextY += -1;
    }
    nextY++;

    //Go Up
    while(M[nextX][nextY] == 1)
    {
        if(M[nextX][nextY-1] == 1)
            return; 
        nextX += -1;
        nextY += 0;
    }
    nextX++;


    if(nextX == x && nextY == y)
    {
        ++res;
        int one = 0, zero = 0;

        for(int i = x; i <= endX; i++)
            for(int j = y; j <= endY; j++) 
            {    
                if(M[i][j] == 0 && i != x && i != endX && j != y && j != endY)
                    ++zero;
                if(M[i][j] == 1 && i != x && i != endX && j != y && j != endY)
                    ++one;
            }

        if(zero == 0)
            ++type1;
        else if(zero > 0 && one == 0)
            ++type2;
    
    }
}


void Clean(int x, int y)
{
    if(x < 0 || y < 0 || x >= m || y >= n)
        return;
    if(M[x][y] != 1)
        return;
    
    int Xaxis[4] = {1, 0, 0, -1};
    int Yaxis[4] = {0, 1, -1, 0};

    M[x][y] = 0;

    for(int i = 0; i < 4; i++)
    {
        int nextX = x + Xaxis[i];
        int nextY = y + Yaxis[i];
        Clean(nextX, nextY);   
    }
    
}

main(void)
{
    
    freopen("BAI4.inp","r",stdin);
	freopen("BAI4.out","w",stdout);
    
    cin>>m>>n;
    for(int i = 0; i < m; ++i)
        for(int j = 0; j < n; ++j)
            cin>>M[i][j];

    for(int i = 0; i < m; ++i)
        for(int j = 0; j < n; ++j)
            if(M[i][j] == 1)
            {
                GoRound(i, j);
                Clean(i, j);
            }
    
    cout<<res<<"\n"<<type1<<"\n"<<type2;
    
    return 0;
}
