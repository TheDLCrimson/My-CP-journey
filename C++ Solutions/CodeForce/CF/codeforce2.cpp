#include <bits/stdc++.h> 
using namespace std; 

main(void)
{
    long long n,m,a,need,x=0,y=0;
    cin>>n>>m>>a;
    x=n/a;
    if(n%a!=0) x++;
    y=m/a;
    if(m%a!=0) y++;
    need=x*y;

    cout<<need;
    
    return 0;

}