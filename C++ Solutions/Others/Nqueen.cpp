#include <bits/stdc++.h>
using namespace std;

const int X = 168;

bool isOK(int game[X][X], int row, int col, int n)
{
    for (int i = 1; i<=col; i++)
        if( game[row][i] == true) 
            return false;

    for (int i = row, j = col; i>=1 && j >=1; i--, j--)
        if( game[i][j] == true) 
            return false;

    for (int i = row, j = col; i<=n && j >=1; i++, j--)
        if( game[i][j] == true) 
            return false;

    return true;

}

bool Solve(int game[X][X], int col, int n)
{
    if (col >= n+1)
        return true;
    
    for (int i = 1; i <= n; i++)
    {
        if( isOK( game, i, col, n ) == true )
        {
            game[i][col] = 1;

            if ( Solve( game, col+1, n) == true )
                return true;
            
            game[i][col] = 0;
        }
    }
    return false;
}

void Setup(int game[X][X], int n)
{
    for (int i = 1; i<=n; i++)
        for (int j = 1; j<=n; j++)
            game[i][j] = 0;
}

void FinalAns(int game[X][X], int n)
{
    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j<=n; j++)
            cout<<game[i][j]<<" ";

        cout<<"\n";
    }
}

main(void)
{
    int Chess[168][168],n;
    cin>>n;

    Setup(Chess, n);
    if ( Solve(Chess, 1, n) == true)
        FinalAns(Chess, n);
    else cout<<"ERROR";

    return 0;

}













