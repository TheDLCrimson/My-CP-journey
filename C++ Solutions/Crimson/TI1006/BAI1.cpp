#include<bits/stdc++.h> 
using namespace std; 

long GCD(long a, long b)
{
    if(a < b)   
        swap(a, b);
    
    while(b != 0)
    {
        a %= b;
        swap(a, b);
    }

    return abs(a);
}


main(void) 
{ 
    freopen("BAI1.inp","r",stdin);
	freopen("BAI1.out","w",stdout);
    
    long a, b, c, d, x;
    cin>>a>>b;

    c = (a*a + b*b);
    d = a * b;
    x = GCD(c, d);
    c /= x;
    d /= x;

    cout<<c<<"/"<<d;
    return 0; 
} 
