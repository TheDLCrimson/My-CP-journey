#include<bits/stdc++.h>
using namespace std;

//CODE BY CRIMSON XD

void qsort(int *A, int l, int r)   
{
    int i, j;
    i = l; j = r;    
    int mid = A[ (l+r)/2 ]; 
    
    while (i <= j)
    {
        while(A[i] < mid) i++; 
        while(A[j] > mid) j--;
                               
        if(i <= j)
        {
            swap(A[i], A[j]);
            i++;
            j--;
        }    
    } 
    
    if(j > l) qsort(A, l, j);
    if(i < r) qsort(A, i, r);          
}

main(void)
{
    int n;
    cin>>n;

    int *A = new int[n];

    for(int i = 0; i < n; i++)
        cin >> A[i];
    
    cout << "\n";
    qsort(A, 0, n-1);
    
    for(int i = 0; i < n; i++)
        cout << A[i] << " ";

    return 0;
}

