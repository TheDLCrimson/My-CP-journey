#include <bits/stdc++.h>
using namespace std;

main(void)
{
    freopen("Bai1.inp","r",stdin);
	freopen("Bai1.out","w",stdout);
    
    long long l, sum = 0;
    string A;
    cin>>A;
    l = A.length();

    for (long long i = 0; i < l; i++)
    {
        int x = A[i] - 48;
        if( x % 2 == 1 )  
            sum += x;
    }

    cout<<sum;

    return 0;

}
