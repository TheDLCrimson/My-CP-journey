#include <bits/stdc++.h>
using namespace std;

int Board[100][100];

void SetUp(int n, int m)
{
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin>>Board[i][j];
   
} 

bool CheckMAX(int x, int curr, int n)
{
    for(int i = 0; i < n; i++)
        if(Board[x][curr] < Board[i][curr])
            return 0;
    //cout<<Board[x][curr]<<": "<<x+1<<" - "<<curr+1<<" (Min col Max row)"<<"\n";
    return 1;
}

bool CheckMIN(int x, int curr, int n)
{
    for(int i = 0; i < n; i++)
        if(Board[x][curr] > Board[i][curr])
            return 0;
    //cout<<Board[x][curr]<<": "<<x+1<<" - "<<curr+1<<" (Max col Min row)"<<"\n";
    return 1;
}

int findThem(int n, int m)
{
    int ans = 0, x = 0;
    
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

        for(int j = 0; j < m; j++)
        {
            if( min == Board[x][j] )
                ans += CheckMAX(x, j, n);
            if( max == Board[x][j] )
                ans += CheckMIN(x, j, n);
        }
        ++x;
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
    cout<<findThem(n, m);
    
    return 0;
}
