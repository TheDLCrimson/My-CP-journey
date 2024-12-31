#include <bits/stdc++.h>
using namespace std;

main(void)
{
    long long d=1,n,x;
    string A;
    cin>>n;
    while (n>0)
    {
        x = n % 16;
        
        if (x < 10)  
            A[d] = x + 48;

        if (x >= 10)
            A[d] = x + 55; 

        n/=16;
        d++;
    }

    for(long long i = d-1; i >= 1; i--)
        cout<<A[i];
    
    return 0;

}
