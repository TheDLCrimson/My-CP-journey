#include <bits/stdc++.h> 
using namespace std; 

main(void)
{
    long long k,n,w,s=0,x=0,ans;
    cin>>k>>n>>w;

    for(int i=1; i<=w; i++)
        x+=i*k;
    
    ans=n-x;

    if(ans<0) cout<<abs(ans);
    else cout<<"0";

    return 0;
        
}
