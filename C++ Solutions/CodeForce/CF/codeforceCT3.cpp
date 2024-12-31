#include <bits/stdc++.h>
using namespace std; 
  
main(void) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, *A, res = 1;
    cin>>n;
    A = new int[n+1];
    for (int i = 0; i < n; i++)
        cin>>A[i];
    
    if (n == 1)
    {
        cout<<"1";
        return 0;
    }

    sort(A, A + n);

    if (A[0] > 1)
        A[0]--;

    for(int i = 1; i < n; i++)
    {
        if(A[i-1] < A[i])
        {
            res++;
            
            if(A[i-1] + 1 < A[i])
                A[i]--;

        }

        else if(A[i-1] == A[i])
        {
            A[i]++;
            res++;
        }

        else if(A[i-1] > A[i])
        {
            A[i]++;
        }

    }


    cout<<res;
    
    return 0; 
} 
