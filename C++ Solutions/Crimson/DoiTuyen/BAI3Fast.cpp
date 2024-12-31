#include <bits/stdc++.h>
using namespace std;

int Board[100][100];
int MaxRow[100], MaxCol[100], MinRow[100], MinCol[100];


void SetUp(int n, int m)
{
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin>>Board[i][j];
   
} 


void findThem(int n, int m)
{
    int x = 0;
    while(x < n)  
    {
        int max = Board[x][0], min = Board[x][0];
    
        for(int j = 0; j < m; j++)
        {    
            if(max < Board[x][j])
                max = Board[x][j];
            
            if(min > Board[x][j])
                min = Board[x][j];
        }

        MaxRow[x] = max;
        MinRow[x] = min;
        
        ++x;
    }

    x = 0;
    while(x < m)  
    {
        int max = Board[0][x], min = Board[0][x];
    
        for(int i = 0; i < m; i++)
        {    
            if(max < Board[i][x])
                max = Board[i][x];
            
            if(min > Board[i][x])
                min = Board[i][x];
        }

        MaxCol[x] = max;
        MinCol[x] = min;
        
        ++x;
    }
}

int Solve(int n, int m)
{
    int ans = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
        {    
            if(MaxCol[j] == MinRow[i])
                ++ans;
            if(MaxRow[i] == MinCol[j])
                ++ans;
        }

    return ans;
}

int main()
{
    freopen("BAI3.inp","r",stdin);
	freopen("BAI3.out","w",stdout);
    
    int n, m;
    cin>>n>>m;
    SetUp(n, m);
    findThem(n, m);
    cout<<Solve(n, m);
    
    return 0;
}
