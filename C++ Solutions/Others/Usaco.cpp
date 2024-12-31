#include <bits/stdc++.h> 
using namespace std; 
  
int main()  
{  
    freopen("gymnastics.in","r",stdin);
	freopen("gymnastics.out","w",stdout);
    
    int k, n, ans = 0;
    cin>>k>>n;

    int A[k][n];
    int M[n][n];

    for (int i = 0; i < k; i++)
        for (int j = 0; j < n; j++)
            cin>>A[i][j];
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            M[i][j] = 0;

    for (int x = 0; x < k; x++)
    {
		    
		for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)
			{
				M[A[x][i]-1 ][ A[x][j]-1 ] = 1;
			}
	}
    
	for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if(M[i][j] == 1 && M[j][i] == 1)
                ans += 0;
            
            else if(M[i][j] == 1) ans += 1;
        }
        
    cout<<ans;    

}
    
    

