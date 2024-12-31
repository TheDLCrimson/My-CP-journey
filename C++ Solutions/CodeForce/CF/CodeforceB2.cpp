#include <bits/stdc++.h>
using namespace std; 
  
main(void) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long *A, n, need = 0, check = 1, zero = 0;
    
    cin>>n;
    A = new long long[n];
    for (long long i = 0; i < n; i++)
    {
        cin>>A[i];
        if( A[i] < 0)
        {
            A[i] = abs(A[i]);
            check *= (-1);
        }
    }
      
    sort(A, A + n);
    
    for (long long i = 0; i < n; i++)
    {
        if(A[i] != 1)
			need += abs(A[i] - 1);
        if(A[i] == 0)
            zero++;
    }

    
    if ( check < 0 && zero == 0)
        need += 2;


    cout<<need;

    return 0;

}

    
