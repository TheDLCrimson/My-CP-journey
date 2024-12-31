#include<bits/stdc++.h> 
using namespace std; 
  
int Change(int *A, int n) 
{ 
	int x;
    int *DP = new int[n];
	
    for(int i = 0; i < n; i++)
	{	
        DP[i] = 1;
        
        if(A[i] == n)
		{
            x = i;
			
		}		
	}
    
	for(int i = 1; i < n; i++)
		for(int j = 0; j < i; j++)
			if( (A[j] + 1 == A[i]) && ( DP[j]+1 > DP[i] ) )
			    DP[i] += DP[j];
			
	return (n - DP[x]);
} 
  
main(void)
{ 
	system("CLS");
	int n;
	int *Arr = new int[n];
	
    cin>>n;
	for(int i = 0; i < n; i++)
		cin>>Arr[i];
	
	cout<<Change(Arr, n);
    
	return 0; 
} 
