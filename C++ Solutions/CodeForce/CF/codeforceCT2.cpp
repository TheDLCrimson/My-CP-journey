#include <bits/stdc++.h>
using namespace std; 

long long GCD(long long a, long long b)
{
    if (a<b) swap(a,b);
    while(b!=0)
    {
        a%=b;
        swap(a,b);
    }

    return abs(a);
}

long long Count(long long n)
{
    int res = 0;
    for(long long i = 1; i <= sqrt(n); i++)
        if (n%i==0) 
        { 
            if (n/i == i)   res ++; 
            else    res += 2; 
        } 
    return res;
}

long long Solve(long long A[], long long n)
{
    long long ans = A[1];
    for(long long i = 1; i <= n; i++)
        ans = GCD(A[i], ans);

    return Count(ans);
}

main(void) 
{ 
    long long n, k, *A, x;
    cin>>n;
    A = new long long[n+2];
    for (long long i = 1; i <= n; i++)
        cin>>A[i];
    
    x = Solve(A,n);
    
    cout<<x;
    
    return 0; 
} 
