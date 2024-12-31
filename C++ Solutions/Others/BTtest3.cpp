#include <bits/stdc++.h> 
using namespace std; 

bool check(int a[], int scan, int now)
{
    //Proceed further if a[now] DOES NOT match with any shit after a[scan]
    for(int i = scan; i < now; i++ )
        if (a[i]==a[now]) return false;
    
    return true;
}

void permute(int a[], int l, int r)  
{  
    // Base case  
    if (l == r)  
    {
        for (int i = 1; i <= r; i++) 
            cout<<a[i]<<" ";
        cout<<"\n";
    }
    else
    {  
        // Permutations made  
        for (int i = l; i <= r; i++)  
            //Check if this shit is not the same one
            if ( check(a, l, i ) == true )
            {  
    
                // Swapping done (only works when backrack just actived) 
                swap(a[l], a[i]);  
    
                // Recursion called (this fixed some shit to find a new one)  
                permute(a, l+1, r);  
    
                //backtrack (when it reaches the dead end)
                swap(a[l], a[i]);  
            }  
    }  
}  
  
// Driver Code  
int main()  
{  
    int a[1000],n;  
    cin>>n;
    for (int i = 1; i <= n; i++)  
        cin>>a[i];
	cout<<"\n";
    
    permute(a, 1, n);  
    
    return 0;  
}  
