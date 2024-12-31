#include <bits/stdc++.h> 
using namespace std; 
  
void SieveOfEratosthenes(int n) 
{ 
    
    bool prime[n+1]; 
    
    prime[0] = false;
    prime[1] = false;
    
    for (int i=2; i<=n; ++i)  
        prime[i] = true;
  
    for (int p=2; p*p<=n; p++) 
    { 
        
        if (prime[p] == true) 
        { 
            
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
  
    for (int p=2; p<=n; p++) 
       if (prime[p]) 
          cout << p << " "; 
} 
  
int main() 
{ 
    int n = 1000000; 
    cout << "Following are the prime numbers smaller "
         << " than or equal to " << n << endl; 
    SieveOfEratosthenes(n); 
    return 0; 
} 
