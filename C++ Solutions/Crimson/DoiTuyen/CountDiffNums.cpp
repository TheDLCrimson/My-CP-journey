#include<bits/stdc++.h> 
using namespace std; 

main(void) 
{ 
    int n, x, c = 0; 
    cin>>n;

    unordered_map<int, bool> Count;

    for (int i = 0; i < n; i++)
    {
        cin>>x;
        Count[x] = 1;
    }
    
    for(auto x : Count)
        ++c;

    cout<<c;

    return 0; 
} 
