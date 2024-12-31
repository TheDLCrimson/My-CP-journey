#include<bits/stdc++.h>
using namespace std;

long long GCD(long long a, long long b)
{
	while(b!=0)
	{
		a%=b;
		swap(a,b);
	}
	
	return abs(a);
}

long long count(long long a, long long b)
{
    long long d=0;
    while((a%b==0) && (a>=b))
    {
        d++;
        a/=b; 
    }

    return d;
}

long long remains(long long a, long long b)
{
    while((a%b==0) && (a>=b))
	a/=b; 

	if(b%a==0);    
    return a;
}

long long check(long long a, long long b)
{
    int y=1;
	while(GCD(a,b)!=1)
    {
    	y*=GCD(a,b);	
		a/=GCD(a,b);
	}
    
    return y;
}

main(void)
{
    long long m=0,n,p,t=1;
    cin>>n>>p;

    for(long long i=1; i<=n; i++)
    {
        
        t*=check(i,p);
    	
        m+=count(t,p);
        t=remains(t,p);
        
		if(t>=p*p)
		t=GCD(t,p);
        
    }
	
    
    cout<<m<<" "<<t;

    return 0;
}
