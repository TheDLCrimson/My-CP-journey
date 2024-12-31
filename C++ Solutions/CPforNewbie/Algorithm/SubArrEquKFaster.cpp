#include<bits/stdc++.h>
using namespace std;

void Solve(int *A, int n, int k)  
{
    unordered_map<int, int> PreSum;
    int sum = 0, maxlen = -1, start, end;

    for (int i = 0; i < n; i++)
    {
        sum += A[i];
        
        if(sum == k)
        {
            maxlen = i + 1;
            start = 0;
            end = i;
        }
        //if not found then insert the sum and its index
        if (PreSum.find(sum) == PreSum.end())
            PreSum[sum] == i;
        //Found the sum
        if( PreSum.find(sum - k) != PreSum.end() && maxlen < i - PreSum[sum-k] )
        {
            maxlen = i - PreSum[sum-k];
            start = PreSum[sum-k] + 1;
            end = i;
        }
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