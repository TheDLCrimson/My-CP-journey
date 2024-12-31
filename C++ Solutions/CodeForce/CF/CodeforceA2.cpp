#include <bits/stdc++.h>
using namespace std; 
  
main(void) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, A[200], b, B[200], n, m;
    
    cin>>n;
    for (int i = 0; i < n; i++)
        cin>>A[i];
        
    
    cin>>m;
    for (int i = 0; i < m; i++)
        cin>>B[i];
      
    sort(A, A + n);
    sort(B, B + m);

    cout<<A[n-1]<<" "<<B[m-1];

    return 0;

}

    