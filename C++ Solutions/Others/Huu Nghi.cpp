#include<bits/stdc++.h>
using namespace std;

bool Divisible(long long n)
{
    int s = 0;
    while(n > 0)
    {
        int m = n % 10;
        s += m;
        n /= 10;
    }
    if(s % 3 != 0)
        return false;
    
    return true
}

main(void
{
    long long n;
    cin>>n;
    
    if ( Divisible(n) )
        cout<<"YES";
    else cout<<"NO"
    
    return 0;
}		
