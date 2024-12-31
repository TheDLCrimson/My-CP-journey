#include <bits/stdc++.h>
using namespace std; 
  

int AllTheWay(int row, int col)
{
    int Maze[row][col];
    
    for (int i = 0; i < row; i++)
        Maze[i][col-1] = 1;

    for (int i = 0; i < col; i++)
        Maze[row-1][i] = 1;

    for (int i = row - 2; i >= 0; i--)
        for (int j = col - 2; j >= 0; j--) 
            Maze[i][j] = Maze[i+1][j] + Maze[i][j+1];  


    return Maze[0][0];
}


main(void) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin>>n>>m;
    
    cout<<AllTheWay(n,m);        
		
    return 0;

}