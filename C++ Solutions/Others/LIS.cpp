#include<bits/stdc++.h> 
using namespace std; 
  
void LIS(int *A, int n) 
{ 
	int *linked = new int[n];
	int *DP = new int[n];
	for(int i = 0; i < n; i++)
		DP[i] = 1;
		
	for(int i = 1; i < n; i++)
		for(int j = 0; j < i; j ++)
			if( (A[j] < A[i]) && ( DP[j]+1 > DP[i] ) )
			{
				DP[i]++;
				linked[i] = j;
			}
		
	
	int maxIndex = 0, maxSeq = 0;
	for(int i = 0; i < n; i++)
		if(DP[i] > DP[maxIndex])
		{
			maxIndex = i;
			maxSeq = DP[i];
		}
	
	cout<<maxSeq<<"\n";
	
	int *list = new int[maxSeq];
	int x = maxIndex, y = maxIndex;
	for(int i = 0; i < maxSeq; i++)
	{
		y = x;
		list[i] = A[x];
		x = linked[y];
	}
	
	for(int i = maxSeq - 1; i >= 0; i--)
		cout<<list[i]<<" "; 

} 
  

main(void) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	int *Arr = new int[n];
	cin>>n;
	for(int i = 0; i < n; i++)
		cin>>Arr[i];
	
	LIS(Arr, n);
    
	return 0; 
} 
