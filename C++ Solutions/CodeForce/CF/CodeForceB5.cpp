#include <bits/stdc++.h>
using namespace std; 


main(void) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;
    cin>>t;
	while(t--)
    {
		int n, *A;
        cin>>n;
		A = new int[n];
		
        for(int i = 0; i < n; i++)
			cin>>A[i];
		
        int d = 0;
		for(int i = n-1; i > 0; i--)
            if(A[i-1] > A[i])
			{
                A[i-1] = A[i];
                d++;
            }
		
		
        cout<<d<<"\n";

    }

    return 0;
}
