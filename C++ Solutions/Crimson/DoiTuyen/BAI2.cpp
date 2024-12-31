#include <bits/stdc++.h>
using namespace std;

int Board[10][10];
int blackX, blackY, whiteX, whiteY;

int isSafe(int x, int y, int val)
{
    if( x < 0 || y < 0 || x > 9 || y > 9 )
        return 0;
    if(val == -1)
    {
        Board[x][y] = -2;
        return -1;
    }    

    Board[x][y] = -1;
    return 1;
}

int Solve(int x, int y)
{
    int ans = 0;
    int MoveX[8] = { 2, 2, 1, 1, -1, -1, -2, -2 };
    int MoveY[8] = { 1, -1, 2, -2, 2, -2, 1, -1 };

    for(int i = 0; i < 8; i++)
    {
        int nextX = x + MoveX[i];
        int nextY = y + MoveY[i];

        ans += isSafe( nextX, nextY, Board[nextX][nextY] );
    }

    return ans;
}

void SetUp()
{
    for(int i = 0; i < 10; i++)
        for(int j = 0; j < 10; j++)
        {
            cin>>Board[i][j];

            if ( Board[i][j] == 1 )
            {
                blackX = i;
                blackY = j;
            }
            
            if ( Board[i][j] == 2 )
            {
                whiteX = i;
                whiteY = j;
            }
        }
} 

int main()
{
    freopen("BAI2.inp","r",stdin);
	freopen("BAI2.out","w",stdout);
    
    int total = 0;
    SetUp();
    total += Solve(blackX, blackY);
    total += Solve(whiteX, whiteY);

    cout<<total;
    /*
    cout<<"\n";
    for(int i = 0; i < 10; i++)
    {    
        for(int j = 0; j < 10; j++)
            cout<<Board[i][j]<<" ";
        cout<<"\n";
    }
    */
    return 0;
}
