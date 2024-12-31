#include<bits/stdc++.h>
using namespace std;

void qsort(int A[],int m,int n)   // Mảng,vị trí số đầu, vị trí số cuối
{
    int i,j;
    i=m;j=n;    //Để giữ lại vị trí số đầu và cuối
    int mid=A[(m+n)/2]; // mid là vạch ngăn (partition)
    
    do
    {
        while(A[i]<mid) i++; 
        while(A[j]>mid) j--;
                                //Xét xem có đúng vị trí hay không 
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
                                //Hai dòng này có thể đổi chỗ cho nhau
}

main(void)
{
    int A[200],n;
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>A[i];
    
	cout<<"\n";
    qsort(A,1,n);
    for(int i=1; i<=n; i++)
        cout<<A[i]<<" ";

    return 0;
}


