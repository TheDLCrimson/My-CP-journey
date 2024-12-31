#include <bits/stdc++.h> 
using namespace std; 

main(void)
{
    string S;
    cin>>S;
    int l = S.length();
    
	for (int i = 0; i < l-2; i+=2)
        for (int j = i+2; j < l; j+=2)    
            if(int(S[i])>int(S[j])) swap(S[i],S[j]);

    cout<<S;
        
    return 0;
    
}