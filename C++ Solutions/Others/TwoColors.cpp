#include <bits/stdc++.h> 
using namespace std;


main(void)  
{  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, *A, cur = 0, limit = 1, d = 2;
    bool check = false;
    
	cin>>n;
    A = new int[n];
    for (int i = 0; i < n; i++)
    {
		cin>>A[i];
		if(A[i] != A[i-1]) d++;
	}
    
	int *start = new int[d];
	int *end = new int[d];
	int *val = new int[d];
	
	start[0] = 0;
    
	for(int i = 0; i < n ; i++)
    {
    	if( (i == n - 1) && (check) && (A[i] == A [i-1]) )
    	{
    		val[cur] = i - start[cur] + 1;
			end[cur] = i;
			
			cur++;
			break;	
		}
	
		
		if(A[i] != A[i+1])
    	{
				
			limit++;
			val[cur] = i - start[cur] + 1;
				end[cur] = i;
			
				cur++;
				start[cur] = i;
    		
    		if ( limit > 2 )
			{
    			check = true;
				limit = 2;
				val[cur] = i - start[cur] + 1;
				end[cur] = i;
			
				cur++;
				start[cur] = i;
			}	

		}
		
	}
    // if there is only ONE char
    if (check == false) 
	{
		val[cur] = n - start[cur] ;
		end[cur] = n - 1;
		cur++;
		
	}
    
    int max = 0, x;
    
	for(int i = cur - 1; i >= 0; i--)
		cout<<start[i]<<" ";	
	/*	if(max < val[i]) 
		{
			max = val[i];		
			x = i;
		}
    	
    	cout<<start[x]+1<<" "<<end[x]+1;
    */
    
    return 0;  
}  
  

