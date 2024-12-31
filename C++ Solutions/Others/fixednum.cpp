#include <bits/stdc++.h>
using namespace std;

    
main(void)
{
    long long a[1000][1000],m,n,x1,x2,y1,y2,t=0;
    cin>>n>>m;                 
    
	for(long long i=1; i<=n; i++) 
        for(long long j=1; j<=m; j++)
            cin>>a[i][j];
    cin>>x1>>y1>>x2>>y2;

    for(long long i=x1; i<=x2; i++) 
        for(long long j=y1; j<=y2; j++)
            t+=a[i][j];

    cout<<t;
    return 0;
}
