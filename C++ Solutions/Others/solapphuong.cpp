//ham ktra so lap phuong 3
#include <bits/stdc++.h>
using namespace std;

bool SCP(long long n)
{
    	
	long long j = round(sqrt(n));
	if(j*j==n) return true;
	
	return false;
}

bool Check(long long n)
{
	if (n==0) return true;
	for(int i=1; i<=n/sqrt(n); i++)
   		if(SCP(n/i)==true)
   			return true;
   			
   	return false;
}

main()
{
    long long n;
    cin>>n;

    if(Check(n)==true)
        cout<<n;
    else cout<<"ERR 404";
    
    return 0;

}
