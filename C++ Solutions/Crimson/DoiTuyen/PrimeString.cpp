#include<bits/stdc++.h> 
using namespace std; 

bool *prime = new bool[100001];

void PrimeMatrix() 
{ 
    
    for (int i=0; i<=100001; ++i)  
        prime[i] = true;
  
    for (int p=2; p<=sqrt(100001); p++) 
        if (prime[p] == true) 
        
            for (int i = p*p; i<=100001; i += p) 
                prime[i] = false; 
         
      
} 

int Solve(string S)
{
    int j, num, res = 0;

    for (int i = 0; i < S.length(); i++)
    {
        if(S[i] >= '0' && S[i] <= '9')
        {
            j = i + 1;
            num = S[i] - '0';
            if( prime[i] && num > res)
                    res = num;
			while(S[j] >= '0' && S[j] <= '9' && j - i < 5)
            {
                num = num*10 + (S[j] - '0');
                j++;
                if( prime[num] && num > res)
                    res = num;
            }
        }
    }
    
    return res;
}

main(void) 
{ 
    PrimeMatrix();
    string S;
    cin>>S;
    cout<<Solve(S);

    return 0;
} 
