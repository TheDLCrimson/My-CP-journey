#include <bits/stdc++.h> 

using namespace std; 

int *Data = new int [100];

void Print(int *A, int k)
{
    for (int i = 0; i < k; i++)
        cout<<A[i]<<" ";

    cout<<"\n";
}

void Combinations(int *A, int n, int k, int index, int iter)  
{  
    if (index == k)  
        Print(Data, k); 
    else
    {
        if (iter > n)
            return;

        Data[index] = A[iter];
        Combinations(A, n, k, index + 1, iter + 1);
        //bacctracc
        Combinations(A, n, k, index, iter + 1);
    }

}  
  
main(void)  
{  
    freopen("BAI3.INP","r",stdin);
    freopen("BAI3.OUT","w",stdout);
    
    int *A, n, k;  
    cin>>n>>k;
    A = new int[n];
    for (int i = 0; i < n; i++)  
        A[i] = i + 1;
  	
    Combinations(A, n - 1, k, 0, 0);  
    
    return 0;  
}  
  

