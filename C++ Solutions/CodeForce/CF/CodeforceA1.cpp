#include<bits/stdc++.h>
using namespace std;
int i,j,m,n,t,a[1005],q[1005][5];
string s;
main()
{
	for(cin>>n>>m; i++<n; j=0)
	    for(cin>>s; j<m; j++)
	        q[j][s[j]-65]++;
	
    for(;j<m;j++)
	    cin>>n, t += max( q[j][0],max( max( q[j][1],q[j][2] ), max( q[j][3],q[j][4] ) ) ) * n;
    
    cout<<t<<"\n";

    for(int x = 0; x < m; x++)
    {    
        for(int y = 0; y<5; y++)
            cout<<q[x][y]<<" ";
        cout<<"\n";
    }

    return 0;
}
