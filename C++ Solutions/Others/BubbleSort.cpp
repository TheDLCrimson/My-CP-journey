#include<bits/stdc++.h>
using namespace std;

void BubbleSortUp(int *A, int n)  
{
    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++)
            if (A[i] > A[j]) 
                swap(A[i], A[j]);    
                    
}

void BubbleSortDown(int *A, int n)  
{
    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++)
            if (A[i] < A[j]) 
                swap(A[i], A[j]);    
                    
}

void Print(int *A, int n)  
{
    for(int i = 0; i < n; i++)
        cout<<A[i]<<" ";
    cout<<"\n";
}


main(void)
{
    int n;
    cin>>n;
    
    int *A = new int[n];
    for(int i = 0; i < n; i++)
        cin>>A[i];
    
	cout<<"\n";

    BubbleSortUp(A, n);
    cout<<"Non-Decreasing Array: \n";
    Print(A, n);  

    BubbleSortDown(A, n);
    cout<<"Non-increasing Array: \n";
    Print(A, n);

    return 0;
}


