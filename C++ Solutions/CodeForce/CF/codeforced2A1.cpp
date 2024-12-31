#include <bits/stdc++.h> 
using namespace std; 

main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n;
    string S;
	char X[11];
    X[10] = '\0';
    cin>>n;
    cin>>S;
    long long l = 0, r = 9 ;

    for (long long i = 0 ; i < 10; i++)
        X[i]= 48;

    for (long long i = 0 ; i < n; i++)
    {
        if ( S[i] == 76 ) 
        {
            X[l] = 49;
            l++;
        } 

        if ( S[i] == 82 ) 
        {
            X[r] = 49;
            r--;
        } 

        
        if ( S[i] >= 48 && S[i] <= 57 ) 
        {
            X[ S[i] - 48 ] = 48;
            
            if( S[i] - 48 <= l) l = S[i] - 48;
            if( S[i] - 48 >= r) r = S[i] - 48;
        }

        while( X[l] == 49) l++;
        while( X[r] == 49) r--;

    }


	cout<<X;
    
    return 0;
}
