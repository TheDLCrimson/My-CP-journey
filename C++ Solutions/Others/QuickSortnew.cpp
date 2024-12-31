#include<bits/stdc++.h>
using namespace std;

void QuickSort(int *A, int m, int n)  
{
    int i = m; 
    int j = n;
    int mid = A[ (m+n) / 2 ];

    do
    {
        while(A[i] < mid) i++;
        while(A[j] > mid) j--;

        if( i <= j )
        {
            swap(A[i], A[j]);
            i++;
            j--;
        }
    }
    while(i < j);

    if(j > m) QuickSort(A, m, j);
    if(i < n) QuickSort(A, i, n);
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

    QuickSort(A, 0, n-1);
    Print(A, n);

    return 0;
}


