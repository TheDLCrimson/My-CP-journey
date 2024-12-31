#include<bits/stdc++.h> 
using namespace std; 


main(void) 
{   
    freopen("BAI2.inp","r",stdin);
	freopen("BAI2.out","w",stdout);
    
    long m, n, k, x;
    cin>>m>>n>>k;

    x = m % n;
    cout<<m/n;
    
    if(k > 0)
    {
        cout<<".";
        for (long i = 0; i < k; ++i)
        {
            x *= 10;
            cout<<x/n;
            x %= n;
        }
    }
    
    return 0; 
} 
