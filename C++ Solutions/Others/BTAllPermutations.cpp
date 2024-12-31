#include <bits/stdc++.h> 
using namespace std; 

bool IsNotTheSame(string A, int start, int now) 
{ 
    for (int i = start; i < now; i++)  
        if (A[i] == A[now]) 
            return 0; 
    
    return 1; 
} 

void Permutations(string A, int index, int end)  
{  
    if (index == end)  
        cout<<A<<"\n";  
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
    
    string S;  
    cin>>S;
    int l = S.length() - 1;  
    
    Permutations(S, 0, l);  
    
    return 0;  
}  
  

