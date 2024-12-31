#include <bits/stdc++.h>
using namespace std;

main(void)
{
    long long a[10000], d=1,n;
    cin>>n;
    while (n>0)
    {
        a[d] = n % 2;
        n /= 2;
        d++;
    }

    for(long long i=d-1; i>=1; i--)
        cout<<a[i];
    
    return 0;

}
