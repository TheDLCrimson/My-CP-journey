#include <bits/stdc++.h>
using namespace std;


bool Prime(int n)
{
    if(n<2) return false;
    if(n>2)
	{
		if(n%2==0) return false;
		
        for(long long i = 3; i<=sqrt(n); i+=2)
    		if(n%i==0) 
                return false;
   	} 
   
   	return true;
}


int main()
{
    freopen("NT.inp","r",stdin);
	freopen("NT.out","w",stdout);

    long long t, n;
    cin>>t;
	
	while(t--)
	{
		cin>>n;
	    if( Prime(n) ) cout<<"NT \n";
	    else cout<<"KNT \n";
	}
    return 0;
}
