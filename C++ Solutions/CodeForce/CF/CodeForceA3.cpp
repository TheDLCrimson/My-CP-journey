#include <bits/stdc++.h>
using namespace std; 
  
long long BinToDec(string S) 
{ 
    long long ans = 0, power = 1, l; 
    
    string A = S;
    l = A.length() - 1;
    for ( long long i = l; i >= 0; i-- ) 
    { 
        if (A[i] == 49)
            ans += power; 
  
        power *= 2; 
    } 
   
    return ans; 
} 
  
long long Solve(long long n)
{
    long long res = 0, x = 1;
	
	
	while(n > x)
    {
        res++;
        x *= 4;
    }
	
    return res;
}

main(void) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string S;
    cin>>S;
    long long n = BinToDec(S);
    
    cout << Solve(n); 

    return 0;

} 
