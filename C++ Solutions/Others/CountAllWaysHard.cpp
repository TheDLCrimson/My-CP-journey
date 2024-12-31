#include <bits/stdc++.h>
using namespace std; 
  
#define MAX 100

int AllTheWay(int Maze[MAX][MAX], int row, int col)
{
    int Ways[row][col];

    
    for (int i = 0; i < row; i++)
        if (Maze[i][col-1] == 0)
            Ways[i][col-1] = 1;

    for (int i = 0; i < col; i++)
        if (Maze[row-1][i] == 0) 
            Ways[row-1][i] = 1;

    for (int i = row - 2; i >= 0; i--)
        for (int j = col - 2; j >= 0; j--) 
        {
            if (Maze[i][j] == 0) 
                Ways[i][j] = Ways[i+1][j] + Ways[i][j+1];  
            else    
                Ways[i][j] = 0;

		}
        
    return Ways[0][0];
}


main(void) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m, Maze[MAX][MAX];
    cin>>n>>m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin>>Maze[i][j];
    
    cout<<AllTheWay(Maze, n, m);        
		
    return 0;

}
