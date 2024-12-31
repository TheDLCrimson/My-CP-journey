#include <bits/stdc++.h>
using namespace std; 
  
main(void) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long k;
    cin>>k;
    while(k--)
    {
        long long *A, n, sum = 0, mid, max = 0;
        cin>>n;
        A = new long long[n];
        
        for (long long i = 0; i < n; i++)
        {   
            cin>>A[i];
            sum += A[i];
        } 

        mid = sum / n;
        if (sum % n != 0)   mid++;

        for (long long i = 0; i < n; i++)
        	if( A[i] >= mid && max < mid) 
                max++;
            
			
		
        cout<<max<<"\n";
    
    }

    return 0;

}
