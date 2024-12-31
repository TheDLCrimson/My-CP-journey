#include <bits/stdc++.h>
using namespace std;

int n,a[1000],c[1000],l[1000],x[1000],sum=0,s;

void Find(int s)
{
	if(s!=0)
	{
		Find( s- a[ x[s] ] );
		a[ x[s] ]=-1;
	}
}

main()
{
 
    cin>>n;
    for(int i=1 ; i<=n ; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
	//sap xep lai nhin cho dep XD
	for(int i=1 ; i<=n-1 ; i++)
		for(int j=i+1 ; j<=n ; j++)
			if(a[i]>a[j]) swap(a[i],a[j]);
    
    for(int i=1 ; i<=n ; i++)
    	c[i]=a[i];
	
	s=sum/2;

    l[0]=1;
    for(int i=1 ; i<=s ; i++)
    	l[i]=0;

    for(int i=1 ; i<=n ; i++)
        for(int j=s ; j>=a[i] ; j--)
            if ( (l[j]==0) && ( l[ j-a[i] ] ==1) ) 
        	{
        		l[j]=1;
        		x[j]=i;
        	}

    while(l[s]==0) s--;
		
    int b=sum-s;

    cout<<s<<" "<<b<<" "<<sum-2*s<<"\n";

	Find(s);
	
	for(int i=1 ; i<=n ; i++)
		if(a[i]<0)
			cout<<c[i]<<" ";
	
	cout<<"\n";
	
	for(int i=1 ; i<=n ; i++)
		if(a[i]>=0)
			cout<<a[i]<<" ";
    
	
	cout<<"\n\n";
	
	 for(int i=0 ; i<=s ; i++)
		cout<<l[i]<<" ";
	
	cout<<s;
	
	return 0;





}


