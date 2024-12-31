#include <bits/stdc++.h>
using namespace std; 
  

main(void) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, l, r;
    cin>>n>>l>>r;
    

    long long x = 1, min = 0, d1 = 1, y = 1, max = 0, d2 = 1;

    for(long long i = 1; i <= n; i++)
    {
        	
        if(d1 != l)
        {
            d1++;
            x *= 2;
            min += x;
        }
        else	min++;

		max += y;
        if(d2 != r)
        {
            d2++;
            y *= 2;
        }
        
    }
    
    cout<<min<<" "<<max; 
    

    return 0;

} 
