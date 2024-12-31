#include <bits/stdc++.h> 
using namespace std; 

main(void)
{
    string S;
    int l;
    cin>>S;
    l= S.length();
    
    for (int i = 0; i < l; i++)
        if(S[i]<97) S[i]+=32;
    
    for (int i = 0; i < l; i++)
        if(S[i]==97 || S[i]==105 || S[i]==117 || S[i]==101 || S[i]==111|| S[i]==121)
        {
            S.erase(S.begin()+i);
            i--;
        }
    
    l=S.length();
    for (int i = 0; i < l*2; i+=2)
        S.insert(i,".");

    cout<<S;

    return 0;
        
}