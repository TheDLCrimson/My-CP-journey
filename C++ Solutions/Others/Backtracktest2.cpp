#include <bits/stdc++.h> 
using namespace std; 
  
//CANNOT DEAL WITH DUPLICATES
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
        {  
  
            // Swapping done  
            swap(a[l], a[i]);  
  
            // Recursion called  
            permute(a, l+1, r);  
  
            //backtrack  
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