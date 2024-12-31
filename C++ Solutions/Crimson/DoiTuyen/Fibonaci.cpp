#include <bits/stdc++.h>
using namespace std;

int FibCount(int *A, int n)
{
    int ans = 0;
    double phi;
    int *Fib = new int[65537];
    bool *FibCheck = new bool[65537];
   
    for(int i = 0; i < 65537; i++)
        FibCheck[i] = false;
    Fib[0] = 0;

    for (int i = 1; Fib[i - 1] <= 65536; i++)
    {
        phi = (1 + sqrt(5)) / 2; 
        Fib[i] = round( pow(phi, i) / sqrt(5) );
    	FibCheck[ Fib[i] ] = true;
	}
 
	for (int i = 0; i < n; i++)
        if(A[i] >= 0)
            if( FibCheck[ A[i] ] )
            {
                FibCheck[ A[i] ] = false;
                ++ans;
            }
    
	return ans;
}

main(void)
{
    //freopen("Bai3.inp","r",stdin);
	//freopen("Bai3.out","w",stdout);
    
    int n;
    cin>>n;
    int *A = new int[n];
    for (int i = 0; i < n; i++)
        cin>>A[i];
    
    cout<<FibCount(A, n);
    
    return 0;
}   
