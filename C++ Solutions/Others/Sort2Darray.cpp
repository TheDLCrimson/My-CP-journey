#include <bits/stdc++.h>
using namespace std; 

main(void) 
{ 
    
    int A[11][11], B[121], n, m, x = 0;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            {
                cin>>A[i][j];
                B[x] = A[i][j];
                x++;
            }
    
    for (int i = 0; i < x - 1; i++)
        for (int j = i + 1; j < x; j++)
            if ( B[i] > B[j] )    
                swap( B[i], B[j] );
        
    
    cout<<"\n";
    for (int i = 0; i < x; i++)
    {    
        cout<<B[i]<<" ";
        if ( (i + 1) % m == 0 )
            cout<<"\n";
    }
    return 0; 
} 
