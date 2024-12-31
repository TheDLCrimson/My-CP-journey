#include <bits/stdc++.h> 
using namespace std; 

/* 
    This one is for checking if there is another element same as the one we are processing
    if yes then DO NOT SWAP
    if no then SWAP and do the next stuff
    XD
*/

bool IsNotTheSame(int *A, int start, int now) 
{ 
    for (int i = start; i < now; i++)  
        if (A[i] == A[now]) 
            return 0; 
    
    return 1; 
} 

void Print(int *A, int n)
{
    for (int i = 0; i <= n; i++)
        cout<<A[i]<<" ";

    cout<<"\n";
}

void Permutations(int *A, int index, int end)  
{  
    if (index == end)  
    {
        Print(A, end); 
    }
    else
    {  
        
        for (int i = index; i <= end; i++)  
        {  
            bool Check = IsNotTheSame(A, index, i);
            if (Check)
            {
                swap(A[index], A[i]);  
    
                Permutations(A, index+1, end);  
    
                swap(A[index], A[i]);  
            }    
       
        }  
    }  
}  
  
main(void)  
{  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int *S, n;  
    cin>>n;
    S = new int[n];
    for (int i = 0; i < n; i++)  
        cin>>S[i];
	cout<<"\n";
  	
    Permutations(S, 0, n-1);  
    
    return 0;  
}  
  

