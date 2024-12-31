#include<bits/stdc++.h>
using namespace std;

main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long m, n, p, ans = 0, A[1001][5];
    string S;
    cin>>n>>m;
            
    for(long long i = 0; i < n; i++)
    {
        cin>>S;
        for(long long j = 0; j<m; j++)
	        A[j][S[j]-65]++;
	
    }
   
    if(n == 1)
    {
        for(long long i = 0; i<m; i++)
        {
            cin>>p; 
            ans += p;
        }
    }
    else
    {
        for(long long j = 0; j<m; j++)
        
            cin>>p ,
            ans += (max( A[j][0],max( max( A[j][1],A[j][2] ), max( A[j][3],A[j][4] ) ) ) * p);
        
    }
    cout<<ans;

    /* testing part
    cout<<"\n";
    for(long long x = 0; x < m; x++)
    {    
        for(long long y = 0; y<5; y++)
            cout<<A[x][y]<<" ";
        cout<<"\n";
    }
    */

    return 0;
}

