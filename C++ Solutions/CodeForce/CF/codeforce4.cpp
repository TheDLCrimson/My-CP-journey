#include <bits/stdc++.h> 
using namespace std; 

main(void)
{
    int A[101],n,k,d=0;
    cin>>n>>k;
    for (int i = 1; i <= n; i++)
        cin>>A[i];
    
    for (int i = 1; i <= n; i++)
    {
        if(A[i]>=A[k] && A[i]>0) d++;
        if(A[i]<A[k]) break;
    }

    cout<<d;

    return 0;
        
}