#include <bits/stdc++.h> 
using namespace std; 

main(void)
{
    long long l,WUB=0;
    string S;
	cin>>S;
    l = S.length();
    for (long long i = 0 ; i < l-2; i++)
        if(S[i] == 'W' && S[i+1] == 'U' && S[i+2] == 'B' )
        {
            S.erase(i, 3);
            S.insert(i," ");
        }
        
    for (long long i = 0 ; i < l-1; i++)
        if(S[i] == S[i+1] && S[i] == ' ')
        {
            S.erase(i,1);
            i--;
        }
    
    if( S[0] == ' ' )
        S.erase(0, 1);
    if(S[l-1] == ' ' )  
        S.erase(l-1, 1);

	cout<<S;
    
    return 0;
}
