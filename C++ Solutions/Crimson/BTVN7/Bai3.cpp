#include<bits/stdc++.h>
using namespace std;

void Solve(int *A, int n, int k)  
{
    int *PreSum = new int[n];
    PreSum[0] = A[0];
    for(int i = 1; i < n; i++)
        PreSum[i] = PreSum[i-1] + A[i]; 
    
    int maxaver = 0;

    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++)
            if( (PreSum[j] - PreSum[i] > k) && ( (PreSum[j] - PreSum[i]) / (j - i) > maxaver) )
                maxaver = (PreSum[j] - PreSum[i]) / (j - i);
            
    cout << maxaver;
}

main(void)
{
    int n, k;
    cin>>n>>k;
    
    int *Array = new int[n];
    for(int i = 0; i < n; i++)
        cin>>Array[i];

    Solve(Array, n, k);

    return 0;
}


