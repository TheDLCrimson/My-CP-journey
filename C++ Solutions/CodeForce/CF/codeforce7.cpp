#include <bits/stdc++.h> 
using namespace std; 

main(void)
{
    long n,l,d=1;
    string S;
    cin>>S;
    l=S.length();
    for (long i = 0; i < l-1 ; i++)
    {
        if(S[i]==S[i+1]) d++;
        if(S[i]!=S[i+1]) d=1;
        if(d==7) break;
    }
    
    if(d==7) cout<<"YES";
    else cout<<"NO";

    return 0;
}
