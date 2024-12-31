#include <bits/stdc++.h> 
using namespace std; 

main(void)
{
    int d=0,A[10][10],x,y;
    for (int i = 1; i <= 5; i++)
        for (int j = 1; j <= 5; j++)
            cin>>A[i][j];
    
	for (int i = 1; i <= 5; i++)
        for (int j = 1; j <= 5; j++)
            if (A[i][j]==1)
            {
                x=j;
                y=i;
            }
            
		
    d+=abs(3-x);
    d+=abs(3-y);

    cout<<d;
        
    return 0;
    
}
