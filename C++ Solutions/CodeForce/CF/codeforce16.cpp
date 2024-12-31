#include <bits/stdc++.h> 
using namespace std; 

main(void)
{
    long n,x[100],y[100],z[100],sX=0,sY=0,sZ=0;
    cin>>n;
    for (int i = 1; i <= n ; i++)
    {
        cin>>x[i]>>y[i]>>z[i];   
        sX+=x[i];
        sY+=y[i];
        sZ+=z[i];
    }

    if (sX==0 && sY==0 && sZ==0) cout<<"YES";
    else cout<<"NO";

    return 0;
        
}
