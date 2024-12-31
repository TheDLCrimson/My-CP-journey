#include <bits/stdc++.h> 
using namespace std; 

main(void)
{
    long n,l,d=0,t;
    string S;
    cin>>l>>t;
    cin>>S;
    for (int x=1; x<=t; x++)
        for (long i = 0; i < l-1 ; i++)
            if(S[i]=='B' && S[i+1]=='G')
            {
                swap(S[i],S[i+1]);
                i++;
            }
             
       
    cout<<S;

    return 0;
}
