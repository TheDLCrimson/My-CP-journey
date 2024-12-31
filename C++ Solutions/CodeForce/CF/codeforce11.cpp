#include <bits/stdc++.h> 
using namespace std; 

main(void)
{
    long n,l,d=0;
    string S;
    cin>>l;
    cin>>S;
    for (long i = 0; i < l-1 ; i++)
        if(S[i]==S[i+1]) d++;
       
    cout<<d;

    return 0;
}
