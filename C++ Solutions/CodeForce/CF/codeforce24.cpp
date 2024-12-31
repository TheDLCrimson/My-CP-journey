#include <bits/stdc++.h> 
using namespace std; 

main(void)
{
    long long n,ans=0;
	cin>>n;
	
    if (n%2==0)  ans = n/2;
    else ans = (n-1)/2 -n;

    cout<<ans;

    return 0;
}
