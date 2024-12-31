#include<bits/stdc++.h>
using namespace std;


main(void)
{
    long long n;
    cin>>n;

    int mid = n/2, l = n, r = 1, midsml = mid;
    
    long long big = 0;
    
    long long small = pow(10, l - 1);
    
    if(n % 2 == 1) midsml++;
    while(l > mid)
    {
        
        big += 9*pow(10, l-1);
        if (r == midsml)
            small += 8*pow(10, r-1);
        else    
            small += 9*pow(10, r-1);

    	l--;
        r++;
	}
    
    cout<<big<<"\n";
    cout<<small<<"\n";
	cout<<big - small;
    
    return 0;
}

