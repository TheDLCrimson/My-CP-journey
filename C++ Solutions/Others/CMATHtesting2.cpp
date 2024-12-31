#include <bits/stdc++.h>
using namespace std;

main(void)
{
    long long n,m,a;

    for(n=1;n<=1000;n+=2)
    	{
    		m=pow(10,n);
    		a=pow(n,3)+n*n+n+1;
    		
    		if(m%a==0) 
				cout<<n<<" "<<m<<" "<<a<<"\n";
 
		}
        
        
                
    return 0;

}
