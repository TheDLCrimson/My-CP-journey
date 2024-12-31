#include <bits/stdc++.h> 
using namespace std; 

main(void)
{
    long A[1000],B[1000],d=1,n,max=0,x;
    cin>>n;
    
    for (int i = 1; i <= n; i++)
        cin>>A[i]>>B[i];

    max+=B[1];
    x=max;
    for (int i = 2; i <= n; i++)
    {
        x+=B[i]-A[i];
        if(x>max) max=x;
    }

    cout<<max;
    
    return 0;
}