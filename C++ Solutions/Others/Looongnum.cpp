#include<bits/stdc++.h>
using namespace std;

bool Prime(long long n)
{
	if(n<=2) return false;
    for(long long i=2; i<=sqrt(n); i++)
        if(n % i == 0) 
			return false;
	return true;		   
}

bool CDS(long long n)
{
	long long s;
	
    for(long long i = 1; i<=n/2; i++)    
    	if(n % i == 0) s+=i;
    s+=n;	
	
	if(s%2!=0)	return false;
	return true;
}

bool SCP(long long n)
{
    	
	long long j = round(sqrt(n));
	if(j*j==n) return false;
	
	return true;
}
 
 main(void)
{
	long long n;
	cin>>n;
	
    for(long long i=1;i<=n;i++)
    {
        if(Prime(i)!=true) cout<<i;
    }
    cout<<"\n";
    for(long long i=1;i<=n;i++)
    {
        if((Prime(i)!=true) && (CDS(i)==true))cout<<i;
    }
    cout<<"\n";
    for(long long i=1;i<=n;i++)
    {
        if( (Prime(i)!=true) && (CDS(i)==true) && (SCP(i)==true) ) cout<<i;
    }

    return 0;
}






