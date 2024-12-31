#include <bits/stdc++.h> 
using namespace std; 

main(void)
{
    long n,A[100][3],d,ans=0;
    cin>>n;
    for (long i = 1; i <= n ; i++)
        for (long j = 1; j <= 3; j++)
        	cin>>A[i][j];
    
    for (long i = 1; i <= n ; i++)
    {    
        d=0;
        for (long j = 1; j <= 3; j++)
            if(A[i][j]==1) d++;
        
        if(d>=2) ans++;
    }
    
    cout<<ans;

    return 0;
}

