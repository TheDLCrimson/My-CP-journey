#include<bits/stdc++.h>
using namespace std;

void QuickSort(int *A, int m, int n, int *B)  
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
            swap(B[i], B[j]);
            i++;
            j--;
        }
    }
    while(i < j);

    if(j > m) QuickSort(A, m, j, B);
    if(i < n) QuickSort(A, i, n, B);
}


void Print(int *A, int n)  
{
    for(int i = 0; i < n; i++)
        cout<<A[i]<<" ";
    cout<<"\n";
}

int minTime(int *A, int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    	sum += ( A[i] * (n-i) );

    return sum;   
}

main(void)
{
    int n;
    cin>>n;
    
    int *Time = new int[n];
    int *Order = new int[n];

    for(int i = 0; i < n; i++)
        Order[i] = i + 1;

    for(int i = 0; i < n; i++)
        cin>>Time[i];

    QuickSort(Time, 0, n-1, Order);
    
    cout<<minTime(Time, n)<<"\n";
    Print(Order, n);

    return 0;
}


