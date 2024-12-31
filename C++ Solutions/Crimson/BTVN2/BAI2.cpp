#include <bits/stdc++.h>
using namespace std;

long long GCD(long long a, long long b)
{
    if (a < b) swap(a, b);
    while(b != 0)
    {
        a %= b;
        swap(a, b);
    }

    return abs(a);
}

long long LCM(long long a, long long b)
{
    long long x = GCD(a, b);
    
    return ( (a*b) / x );
}

main(void)
{
    freopen("Bai2.inp","r",stdin);
	freopen("Bai2.out","w",stdout);
    
    long long a, b, c, d, x1, x2, z;
    cin>>a>>b>>c>>d;
    x2 = LCM(b, d);
    
    a *= (x2 / b);
    c *= (x2 / d);
    x1 = a + c;
    z = GCD(x1, x2);

    cout<<x1/z<<" "<<x2/z;
    return 0;
}   
