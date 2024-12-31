#include <bits/stdc++.h>
using namespace std;

main(void){
    long x[101],y[101],a[202];
    long s,n,p,q,d=1;

    cin>>n;
    cin>>p;
    for(long i=1; i<=p; i++)
    {
        cin>>x[i];
        a[i]=x[i];
    }
    cin>>q;
    for(long i=1; i<=q; i++)
    {
        cin>>y[i];
        a[p+i]=y[i];
    }
    if(p == 0 && q == 0)
    {
        cout<<"Oh, my keyboard!";
        return 0;
    }
        
    s = p + q;
    
    for(long i=1; i < s; i++)
        for(long j=i+1; j <= s; j++)
            if( a[i] > a[j] )   swap(a[i], a[j]);

    for (long i =1; i < s; i++)
        if (a[i]!=a[i+1]) d++;
    

    if (d==n) cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";

    return 0;
}
