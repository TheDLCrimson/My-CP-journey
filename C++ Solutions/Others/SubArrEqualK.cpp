#include<bits/stdc++.h>
using namespace std;

void Solve(int *A, int n, int k)  
{
    int *PreSum = new int[n];
    PreSum[0] = A[0];
    for(int i = 1; i < n; i++)
        PreSum[i] = PreSum[i-1] + A[i]; 

    int maxlen = -1, start, end;
    
    for(int i = 0; i < n; i++)
        if(PreSum[i] == k && i > maxlen)
            {
                maxlen = i + 1;
                start = 0;
                end = i;
            }
    
    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++)
            if( PreSum[j] - PreSum[i] == k && j - i > maxlen)
            {
                maxlen = j - i;
                start = i + 1;
                end = j;
            }

    cout<<"The lengeh of subarray is: "<<maxlen<<"\n";
    cout<<"The subarray is: ";
    for (int i = start; i <= end; i++)
        cout<<A[i]<<" ";
    
}

main(void)
{
    system("CLS");
    int n, k;
    cin>>n>>k;
    
    int *Array = new int[n];
    for(int i = 0; i < n; i++)
        cin>>Array[i];

    Solve(Array, n, k);

    return 0;
}


