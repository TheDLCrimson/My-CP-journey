#include<bits/stdc++.h> 
using namespace std; 
  
long long Sumd(long long n)
{
    long long sum = 0; 
    while (n != 0) 
    {
        sum = sum + n % 10; 
        n = n/10; 
    }
    return sum;
}

long long SumTrol(long long l, long long r) 
{ 
	long long mainsum = 0; 
    for(long long i = l; i <= r; i++)
    {
        long long sidesum = 0;
        sidesum += Sumd(i);
        while(sidesum > 9)
            sidesum = Sumd(sidesum);

        mainsum += sidesum; 
    }

    return mainsum;
} 
  

main(void) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout.tie(NULL);
	
	long long q;
	cin>>q;

    while(q--)
    {
        long long l, r;
        cin>>l>>r;
        cout<<SumTrol(l, r)<<"\n";

    }

    
	return 0; 
} 
