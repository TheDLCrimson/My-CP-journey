#include<bits/stdc++.h> 
using namespace std; 

void Solve(int *S, int n) 
{ 
	int limit = 1;
	int shift = 0;
    int *val = new int[n];
    int *start = new int[n];
	int *end = new int[n];
    int iter = 0, maxtwo = 0;

	for(int i = 0; i < n; i++)
	{
		if(S[i] != S[i+1] && i != n - 1 )
			limit++;
		
		while(limit > 2)
		{
			if(S[shift] != S[shift+1])
            	limit--;
                
            
			shift++;
		}
		val[iter] = 0;	
		val[iter] = max( val[iter], (i - shift + 1) );
        start[iter] = shift;
        end[iter] = i;
    	iter++;
	}
	int x = 0;
    for(int i = iter - 1; i >= 0; i--)
		cout<<val[i]<<" ";
	/*	if(maxtwo < val[i]) 
		{
			maxtwo = val[i];		
			x = i;
		}
    	
    	cout<<start[x]+1<<" "<<end[x]+1;
    */
} 
  

main(void) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin>>n;
	int *A = new int[n];
	for (int i = 0; i < n; i++)
    	cin>>A[i];
	
    
	Solve(A, n); 
    
	return 0; 
} 
