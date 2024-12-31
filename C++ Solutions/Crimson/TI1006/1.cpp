#include<bits/stdc++.h>
using namespace std;
main(void)
{
    int n, m, max = INT_MIN;
    cin >> m >> n;
    int A[m][n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)  
        { 
            cin >> A[i][j];
            if(max < A[i][j])
                max = A[i][j];
        }   
    int h, c;
    cin >> h >> c;
    --h;
    --c;
    int ans = INT_MAX;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)      
            if(max == A[i][j])
                ans = min(ans, abs(h - i) + abs(c - j) + 1);
    cout << ans;
    return 0;
}