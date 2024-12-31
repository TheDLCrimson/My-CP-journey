#include <bits/stdc++.h> 
using namespace std; 

int FindLongestSub(string S, int l) 
{ 
    
    int M[l+1][l+1];
    int MaxLen = 0;

    for (int i = 0; i <= l; i++)
        for (int j = 0; j <= l; j++)
            M[i][j] = 0;
    
    for (int i = 1; i <= l; i++) 
        for (int j = i + 1; j <= l; j++) 
            if ( S[i-1] == S[j-1] ) 
            { 
                M[i][j] = M[i-1][j-1] + 1; 
                MaxLen = max(MaxLen, M[i][j]);
            } 
           
	for (int i = 1; i <= l; i++) 
    {
		for (int j = 1; j <= l; j++)
        	cout<<M[i][j]<<" ";
		cout<<"\n";
	}
    return MaxLen + 1; 
} 
  
int main() 
{ 
    //freopen("whereami.in","r",stdin);
	//freopen("whereami.out","w",stdout);
    
    int l;
    string S;
    cin>>l;
    cin>>S;

    cout << FindLongestSub(S, l); 
    return 0; 
} 
