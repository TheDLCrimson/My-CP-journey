#include <bits/stdc++.h> 
using namespace std; 

main(void)
{
    long n,A[100],take=0,s=0,X=0,c=1;
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cin>>A[i];
        s+=A[i];
    }
    for (int i=1; i<n; i++)
        for (int j=i+1; j<=n; j++)
            if(A[i]<A[j]) swap(A[i],A[j]);

    
    while(X<=s/2)
    {
        X+=A[c];
        c++;    
		take++;
    }
     
    cout<<take;

    return 0;
}
