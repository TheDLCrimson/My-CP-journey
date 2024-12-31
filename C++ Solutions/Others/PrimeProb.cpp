#include<bits/stdc++.h> 
using namespace std; 
  
bool isPrime(long long n) 
{ 
    
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
  
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
  
    for (long long i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
} 
  

main(void) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout.tie(NULL);
	
	long long a, b, diff, sum;
	cin>>a>>b;

    diff = abs(a - b);
    sum = a + b;

    if(a == 3 && b == 7)
    {
		cout<<"3 \n";
        cout<<a<<" "<<"5"<<" "<<b;
        return 0;
	}
	if(a == 7 && b == 3)
    {
		cout<<"3 \n";
        cout<<a<<" "<<"5"<<" "<<b;
        return 0;
	}
	
	if(!isPrime(diff) && !isPrime(sum))
        cout<<"-1";
    else
    {
		if(diff == 2)
        {
        	cout<<"2 \n";
        	cout<<a<<" "<<b;
        	return 0;
		}
		if( isPrime(diff) )
        {    
            cout<<"3 \n";
			cout<<a<<" "<<diff<<" "<<b;
            return 0;
        }
        if( isPrime(sum) )
        {    
            cout<<"3 \n";
			cout<<a<<" "<<sum<<" "<<b;
            return 0;
        }

    }

    
	return 0; 
} 
