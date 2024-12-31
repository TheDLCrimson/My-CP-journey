#include<bits/stdc++.h> 
using namespace std; 
  
void printSubsequences(string S, int n) 
{ 
    
    unsigned int SubNum = pow(2, n); 
  
 
    for (int counter = 0; counter < SubNum; counter++) 
    { 
        for (int scan = 0; scan < n; scan++) 
        { 
            
            if ( (counter & (1<<scan)) != 0 ) 
                cout << S[scan] ; 
        } 
        cout << endl; 
    } 
} 
  

main(void) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout.tie(NULL);
	
	string S;
    cin>>S;
    int l = S.length();

    printSubsequences(S, l); 
    return 0; 
} 
