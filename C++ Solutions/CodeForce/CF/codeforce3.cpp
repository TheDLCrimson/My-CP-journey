#include <bits/stdc++.h> 
using namespace std; 

main(void)
{
    int n,l,i;
    string S[101];
    cin>>n;
    for(i=1; i<=n; i++)
        cin>>S[i];

    for(i=1; i<=n; i++)
    {
        l =S[i].length();
        if (l>10)
            cout<<S[i][0]<<l-2<<S[i][l-1]<<endl;
        else cout<<S[i]<<endl;
    }
    
    return 0;
        
}