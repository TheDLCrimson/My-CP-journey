#include <bits/stdc++.h>
using namespace std;

bool snt(int a)
{
    if (a<2) return false;
    if(a>2)
    {
        if (a%2==0)
            return false;
        
        for(int i=3; i<=sqrt(a); i+=2)
            if(a%i==0) return false;
    }
    return true;

    }
    
main(void)
{
    int n, a[30000];
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];

    for(int i=1; i<=n; i++)
        if(snt(a[i])==true) cout<<a[i]<<" ";
    
}
