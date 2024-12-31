#include<bits/stdc++.h> 
using namespace std; 
  

void AllSolution(int*,int);

main(void) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout.tie(NULL);
	
	int k, *A;
	
	cin>>k;
	
    AllSolution(A, k); 
    
	return 0; 
} 

void AllSolution(int *S, int k) 
{ 
    
    for (int x1 = 0; x1 <= k - 6; x1++)
    	for (int x2 = x1 + 1; x2 <= k - 5; x2++)
    		for (int x3 = x2 + 1; x3 <= k - 4; x3++)
    			for (int x4 = x3 + 1; x4 <= k - 3; x4++)
    				for (int x5 = x4 + 1; x5 <= k - 2; x5++)
    					for (int x6 = x5 + 1; x6 <= k - 1; x6++)
    						cout<<S[x1]<<" "<<S[x2]<<" "<<S[x3]<<" "<<S[x4]<<" "<<S[x5]<<" "<<S[x6]<<"\n";
    						    
    
} 
