#include <bits/stdc++.h>
using namespace std;

main(void)
{
    int n,a[1000],l[1000],sum=0,d=0;

    cin>>n;
    for(int i=1 ; i<=n ; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }

	cout<<"\n";
	
    int s=sum/2;
	
	for(int i=1 ; i<=n-1 ; i++)
		for(int j=i+1 ; j<=n ; j++)
			if(a[i]>a[j]) swap(a[i],a[j]);
	
    l[0]=1;
    for(int i=1 ; i<=s ; i++)
    	l[i]=0;

    for(int i=1 ; i<=n ; i++)
        for(int j=s ; j>=a[i] ; j--)
            if(a[i]<=s)
				if ( (l[j]==0) && ( l[ j-a[i] ] ==1) ) 
            	{
                	l[j]=1;
                	d++;
            	}
	
	cout<<s<<" "<<d<<"\n";
	for(int i=1 ; i<=s ; i++)
    	cout<<l[i]<<" ";
    
    
	return 0;

}
