#include <bits/stdc++.h>
using namespace std; 
  

main(void) 
{ 
    int t, n, *P;
    bool C[200];
    cin>>t;

    P = new int[200];
    for (int x = 1; x <= t; x++)
    {
        cin>>n;
        for (int i = 1; i <= n; i++)
            cin>>P[i];
        
        if(n == 1 && P[1] == 1)
            C[x] = false; 
            
        else
        if (P[1] + 1 == P[2] || P[2] - P[1] == P[3])
        {
            for (int i = 2; i <= n-1; i++)
                if (P[i] + 1 != P[i+1] || P[i] - P[i-1] != P[i+1])
                {
                    C[x] = true;
                    break;
                }    
        }

        else 
        if (P[1] - 1 == P[2] || P[1] == P[2] - P[3])
        {
            for (int i = 2; i <= n-1; i++)
                if (P[i] - 1 != P[i+1] || P[i] != P[i+1] - P[i+2])
                {
                    C[x] = true;
                    break;
                }    
        }
    } 
        for (int x = 1; x <= t; x++)
        {
            if (C[x] == true) cout<<"NO"<<"\n";
            else cout<<"YES"<<"\n";
        }        
    
    return 0;    

    
} 
