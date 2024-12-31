#include<bits/stdc++.h> 
using namespace std; 

int minCoins(int *T, int n, int Money) 
{ 
    int DP[Money+1]; 
    
    DP[0] = 0;
    for (int i = 1; i <= Money; i++) 
        DP[i] = INT_MAX; 

    for (int i = 1; i <= Money; i++) 
    { 
        for (int j = 0; j < n; j++) 
            if (T[j] <= i) 
            { 
                if ( DP[i] > DP[ i- T[j] ] + 1 )
                    DP[i] = DP[ i- T[j] ] + 1;
            } 
    } 
    
    return DP[Money]; 
} 

main(void) 
{ 
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout.tie(NULL);
  
    int q, Money;
    int *T = new int[16];
	int x;  cin>>x;
	T[0] = 1;
    T[1] = 2;
    T[2] = 5;
    T[3] = 10;
    T[4] = 20;
    T[5] = 50;
    T[6] = 100;
    T[7] = 200;
    T[8] = 500;
    T[9] = 1000;
    T[10] = 2000;
    T[11] = 5000;
    T[12] = 10000;
    T[13] = 20000;
    T[14] = 50000;
    T[15] = x;

	cin>>q;
	while(q--)
    {
        cin>>Money;
        cout<<minCoins(T, 16, Money)<<"\n";    
    }

    return 0; 
} 
