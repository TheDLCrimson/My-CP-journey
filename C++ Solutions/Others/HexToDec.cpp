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
        if (A[i] >= '0' && A[i] <= '9')  
            ans += int(A[i] - 48) * x ;
            
        if (A[i] >= 'A' && A[i] <= 'F')
            ans += int(A[i] - 55) * x ;
        
        x *= 16;
    }

    cout<<ans;

    return 0;

}
