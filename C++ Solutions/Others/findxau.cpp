#include<bits/stdc++.h>
using namespace std;



main(void)
{
    string S,R,X;
    int d=0;
    cin>>S;
	R=S;
    int l = S.length();
    for(int i = 0; i<l-1; i++)
        for(int j = i+1; j<l; j++)    
            if(int(S[i])<int(S[j]))
                swap(S[i],S[j]);

    for(int i = 0; i<l-1; i++)
        for(int j = i+1; j<l; j++) 
            if(int(S[i])!=int(S[j]))
                d++;

    cout<<d;       

    return 0;
}

