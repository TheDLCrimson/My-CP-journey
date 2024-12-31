#include<bits/stdc++.h>
using namespace std;

bool Check(int x, int y, int val, int m, int n)
{
    if(x < 0 || y < 0 || x >= m || y >= n)
        return true;
    if(val == 1 || val == 2)
        return true;
    
    return false;
}

int Solve(int M[201][201], int x, int y, int m, int n)
{
    if(x < 0 || y < 0 || x >= m || y >= n)
        return 0;
    if(M[x][y] != 1)
        return 0;
    
    int Xaxis[4] = {1, 0, 0, -1};
    int Yaxis[4] = {0, 1, -1, 0};
    int ans = 4;

    //Chccking the next one to prevent overlaping
    for (int i = 0; i < 4; ++i)
    {
        int nextX = x + Xaxis[i];
        int nextY = y + Yaxis[i];
        if( Check( nextX, nextY, M[nextX][nextY], m, n ) )
            ans--;
    }
    
	M[x][y] = 2;
	//On to the next one
    for (int i = 0; i < 4; ++i)
    {
        int nextX = x + Xaxis[i];
        int nextY = y + Yaxis[i];
        
        ans += Solve(M, nextX, nextY, m, n);   
    }

    return ans;
}

main(void)
{
    
    freopen("BAI3.inp","r",stdin);
	freopen("BAI3.out","w",stdout);
    int m, n, res = 0;
    cin>>m>>n;
    int Mat[201][201];

    for(int i = 0; i < m; ++i)
        for(int j = 0; j < n; ++j)
            cin>>Mat[i][j];

    for(int i = 0; i < m; ++i)
        for(int j = 0; j < n; ++j)
            if(Mat[i][j] == 1)
                res += Solve(Mat, i, j, m, n);
    
    cout<<res;
    
    return 0;
}
