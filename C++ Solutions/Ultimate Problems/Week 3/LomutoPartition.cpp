#include<bits/stdc++.h>
using namespace std;

//CODE BY CRIMSON XD

void qsort(int *A, int l, int r, int n)   
{
    int i, j; //piv = r
    i = l; j = l;    
    while(j <= r)
    {
        if(A[j] < A[r] || j == r)
        {
            swap(A[j], A[i]);
            ++i;
            ++j;
        }
        else 
            ++j;
    }
    //cout << i << " " << j << "\n";
    for(int i = 0; i < n; i++)
        cout<< A[i] << " ";
    cout << "\n";
    
    if (l < i - 2)  qsort(A, l, i - 2, n);
    if (i < r) qsort(A, i, r, n);
}

main(void)
{
    int n;
    cin >> n;
    int *A = new int[n];
    for(int i = 0; i < n; i++)
        cin >> A[i];
    
    qsort(A, 0, n-1, n);

    return 0;
}

