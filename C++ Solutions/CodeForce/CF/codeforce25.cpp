#include <bits/stdc++.h> 
using namespace std; 

main(void)
{
    long long A=0,D=0,l,n;
    string S;
    cin>>l;
	cin>>S;
    for (long long i = 0 ; i < l; i++)
    {
        if(S[i] == 'A')  A++;
        if(S[i] == 'D')  D++;
    }
    
    if (A > D)  cout<<"Anton";
    if (A == D)  cout<<"Friendship";
    if (A < D)  cout<<"Danik";
    
    return 0;
}
