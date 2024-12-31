#include <bits/stdc++.h> 
using namespace std; 

main(void)
{
    long A[1000],need=0,n,x1=0,x3=0,c1=0,c2=0,c3=0,z;
    cin>>n;
    
    for (int i = 1; i <= n; i++)
        cin>>A[i];

    for (int i = 1; i <= n; i++)
    {
        if(A[i]==4) need++;
        if(A[i]==1) c1++;
        if(A[i]==2) c2++;
        if(A[i]==3) c3++;
    }
    
    need+=(c2/2);
    c2%=2;
    
    need+=c3;
    c1-=c3;
    
    if(c2==1) 
    {
        need+=1;
        c1-=2;
    }

    if(c1>0)
    {
        if(c1%4==0) need+=(c1/4);
        else need+=(c1/4)+1;
    }

    cout<<need;
    
    return 0;
}

