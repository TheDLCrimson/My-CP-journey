#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool OddorEven(int x)
{
    if(x % 2 == 0)
        return 1;
    // even = true; odd = false
    return 0;
}

ll  Solve(int a, int b)
{
    ll diff = abs(a - b);
    ll s = 0, count = 0;
    while(s < diff)
    {
        ++count;
        s += count;
    }

    if(s == count || diff == 0)
        return count;

    if( OddorEven(diff) )
        while( !OddorEven(s) )
        {
            ++count;
            s += count;
        }

    if( !OddorEven(diff) )
        while( OddorEven(s) )
        {
            ++count;
            s += count;
        }
    
    return count;
}

main(void)
{
    
    ll t;
    cin>>t;
    while(t--)
    {
        ll a, b;
        cin>>a>>b;
        cout<<Solve(a, b)<<"\n";
    }
    return 0;
}
