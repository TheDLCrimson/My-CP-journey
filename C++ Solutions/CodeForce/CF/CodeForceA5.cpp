#include <bits/stdc++.h>
using namespace std; 
  
main(void) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long *A, n, check, even = 0, odd = 0;
    
    cin>>n;
    A = new long long[n];
    for (long long i = 0; i < n; i++)
    {
        cin>>A[i];
        
        if (abs(A[i]) % 2 == 0) even++;
        if (abs(A[i]) % 2 == 1) odd++;
    }
    
    if(even < odd) swap(even, odd);
    

    cout<<odd;

    return 0;

}
