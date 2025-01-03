#include<iostream> 
using namespace std; 

#define MAX 10000 
  

int multiply(int x, int res[], int res_size) 
{ 
    int carry = 0;  
    for (int i=0; i<res_size; i++) 
    { 
        int prod = res[i] * x + carry;
        
        res[i] = prod % 10;   
  
        carry  = prod/10;     
    } 
  
   
    while (carry) 
    { 
        res[res_size] = carry%10; 
        carry = carry/10; 
        res_size++; 
    } 
    return res_size; 
} 

void SupaPow(int x, int n) 
{ 
    int res[MAX]; 
  
    
    res[0] = 1; 
    int res_size = 1; 
  
  
    for (int i=1; i<=n; i++) 
        res_size = multiply(x, res, res_size); 
  
    cout << "Result: \n"; 
    for (int i=res_size-1; i>=0; i--) 
        cout << res[i]; 
    
    cout<<"\n"<<"Digit(s): "<<res_size;
} 

// Driver program 
int main() 
{ 
    long long n,x;
    cin>>n>>x;
	SupaPow(n,x); 
    
    return 0; 
} 
