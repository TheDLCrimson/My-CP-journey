#include <bits/stdc++.h> 
using namespace std; 

main(void)
{
    long long A=0,D=0,l;
    string S;
    cin>>S;
    l = S.length();
    for (long long i = 0 ; i < l; i++)
    {
        if(S[i] == 95)  A++;
        if(S[i] == 68)  D++
    }
    
    if (A > D)  cout<<"Anton";
    if (A == D)  cout<<"Friendship";
    if (A < D)  cout<<"Danik";
    
    return 0;
}