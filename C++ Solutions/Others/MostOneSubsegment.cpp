#include<bits/stdc++.h> 
using namespace std; 
  
int MaximumOfOne(string S, int n, int k) 
{ 
	int zero = 0;
	int shift = 0; 
	int maxone = 0;
	
	for(int i = 0; i < n; i++)
	{
		if(S[i] == 48)
			zero++;
		
		while(zero > k)
		{
			// Clear the first zero point
			// If it is not 0 then it will keep shifting until it meet 0
			if(S[shift] == 48)
				zero--;
			
			// Shift to the next 1 after 0	
			shift++;
		}
			
		maxone = max( maxone, (i - shift + 1) );
		
	}
    return maxone;
} 
  

main(void) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout.tie(NULL);
	
	int n, k;
	cin>>n>>k;
	string S;
    cin>>S;
	n = S.length();
    
	cout<<MaximumOfOne(S, n, k); 
    
	return 0; 
} 
