#include<bits/stdc++.h>
using namespace std;

void Solve(int *A, int n)  
{
    int maxC = 0;
    int *Count = new int[n + 1];
    for(int i = 1; i <= n; i++)
        Count[i] = 0;

    for(int i = 1; i <= n; i++)
    {
        Count[ A[i] ] ++;
        maxC = max( Count[ A[i] ], maxC );
    }

    for(int i = 1; i <= n; i++)
       // if(Count[ A[i] ] == maxC)        
            cout<<Count[i]<<"\n";

}

main(void)
{
    int n;
    cin>>n;
    
    int *Vote = new int[n + 1];
   
    for(int i = 1; i <= n; i++)
        cin>>Vote[i];

    Solve(Vote, n);

    return 0;
}


