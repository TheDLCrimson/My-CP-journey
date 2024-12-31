#include <bits/stdc++.h>
using namespace std;


int GCD(long long a, long long b)
{
    if (a<b) swap(a,b);
    while(b!=0)
    {
        a%=b;
        swap(a,b);
    }

    return abs(a);
}

main(void)
{
    long long a,b,a1,b1,x;
    cin>>a>>b;
    x = GCD(a,b);
    a1 = a/x;
    b1 = b/x;
    
    cout<<a1<<" "<<b1;
    return 0;
}   
