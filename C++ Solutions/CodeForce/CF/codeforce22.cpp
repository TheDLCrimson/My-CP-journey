#include <bits/stdc++.h> 
using namespace std; 

main(void)
{
    long n, m, diff, x, f[2000];
    cin>>n>>m;
    for (long i = 1; i <= m; i++)
        cin>>f[i];

    for (long i = 1; i < m; i++)
        for (long j = i+1; j <= m; j++)
            if (f[i] > f[j])   swap(f[i], f[j]);
    
    diff= 10000;
    n-=1;
	for (long i = 1; i <= m-n; i++)
    {
        x = f[i+n] - f[i];
        if(diff >= x)    diff= x;
    }
    
    cout<<diff;
    
    return 0;
}

