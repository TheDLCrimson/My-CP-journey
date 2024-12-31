#include <bits/stdc++.h>
using namespace std; 

void qsort(long long A[],long long m,long long n)   
{
    long long i,j;
    i=m;j=n;    
    long long mid=A[(m+n)/2]; 
    
    do
    {
        while(A[i]<mid) i++; 
        while(A[j]>mid) j--;
                                
        if(i<=j)
        {
            swap(A[i],A[j]);
            i++;
            j--;
        }    
    } 
    while (i<j);
    
    if(j>m) qsort(A,m,j);
    if(i<n) qsort(A,i,n);
                               
}

main(void) 
{ 
    long long n, k, *A, mid, mid2;
    cin>>n>>k;
    A = new long long[n+2];
    for (long long i = 1; i <= n; i++)
        cin>>A[i];
    
    if (n == 1)
    {
        cout<<A[1]+k;
        return 0;
    }

    qsort(A, 1, n);

    mid = (n+1)/2;
    mid2 = mid;
    for(long long i = 1; i <= k; i++)
    {
        if(A[mid] < A[mid+1]) 
        	A[mid]++;
		
        else
        {
            for(long long j = mid2; j <= n-1; j++)
            {
                if(A[j] != A[j+1])
                {
                    mid2=j-1;
					A[j]++;
                    break;
                }
                if(A[j] == A[j+1] && (j+1) == n)
                {
                    mid2=j;
					A[n]++;
                    break;
                }
            } 
        }

    }

    cout<<A[mid];
    
    return 0; 
} 
