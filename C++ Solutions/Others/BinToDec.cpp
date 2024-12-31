#include <bits/stdc++.h>
using namespace std;

main(void)
{
    long long n,x=1,ans=0,l;
    string A;
    cin>>A;
    l = A.length()-1;

    for (long long i = l; i>=0; i--)
    {
            ans += int(A[i] - 48) * x ;
            x *= 2;
    }

    cout<<ans;

    return 0;

}
