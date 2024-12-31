#include <bits/stdc++.h> 
using namespace std; 

main(void)
{
    long n,l,d=1;
    string S;
    cin>>S;
    l=S.length();
    
	for (int i = 0; i < l-1; i++)
        for (int j = i+1; j < l; j++)    
            if(int(S[i])>int(S[j])) swap(S[i],S[j]);
    
    for (long i = 0; i < l-1 ; i++)
        if(S[i]!=S[i+1]) d++;

    if(d%2==0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";

    return 0;
}