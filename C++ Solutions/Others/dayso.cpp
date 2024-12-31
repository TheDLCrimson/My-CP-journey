#include<bits/stdc++.h>
using namespace std;

void qsort(int A[],int m,int n)
{
    int i,j;
    i=m;j=n;
    int mid=A[(m+n)/2];
    
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
    int A[255],n;
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>A[i];
    
	cout<<"\n";
    
    qsort(A,1,n);
    
    for(int i=1; i<=n; i++)
        cout<<A[i]<<" ";

    return 0;
}

