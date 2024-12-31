#include <bits/stdc++.h> 
using namespace std;

int GameTeam[12];

bool SolveIt(int *A, int k, int start, int ProcessingSum, int TargetedSum, bool used[], int end) ;

bool CanBeDivided(int *A, int n, int k) 
{ 
    int sum = 0;
    for (int i = 0; i < n; i++) 
        sum += A[i];

    if  (sum % k == 0 && n >= k)
	{
        int need = sum / k;
        bool used[n];
            
        return SolveIt(A, k, 0, 0, need, used, n) ; 
	}
    else return false;

} 

bool SolveIt(int *A, int k, int start, int ProcessingSum, int TargetedSum, bool used[], int end)
{  
    if (k == 0)  
        return true;
    
    if (ProcessingSum == TargetedSum)
        SolveIt(A, k - 1, 0, 0, TargetedSum, used, end);
    
        for (int i = start; i < end; i++)  
        {  
            if (!used[i] && (ProcessingSum + A[i]) <= TargetedSum)
            {
                used[i] = true;
                GameTeam[i] = k;
				
                if ( SolveIt( A, k, i + 1, ProcessingSum + A[i], TargetedSum, used, end) )
                    return true;
                
                used[i] = false;
                GameTeam[i] = 1;
            }    
       
        }  
}  

void Print(int *A, int n, int k)
{
    while(k > 0)
    {
        for (int i = 0; i < n; i++)
            if (GameTeam[i] == k)
                cout<<A[i]<<" ";

        cout<<"\n";
        k--;
    }

}

main(void)  
{  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k, *Arr;
    cin>>n>>k;
    int m = k;
    Arr = new int[n];
    for (int i = 0; i < n; i++)
        cin>>Arr[i];
    
    sort(Arr, Arr + n, greater<int>() );

    if ( CanBeDivided(Arr, n, k) )  
        Print(Arr, n, m);
    else cout<<"NOPE CANT DO THIS";
    
    return 0;  
}  
  

