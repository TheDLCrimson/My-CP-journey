#include <bits/stdc++.h>
using namespace std;

long long BinToDec(string S)
{
    long long l = S.length()-1;
    long long ans = 0, x = 1;
    for (long long i = l; i>=0; i--)
    {
            ans += int(S[i] - 48) * x ;
            x *= 2;
    }

    return ans;

}

void DecToHex(long long n)
{
    long long x, d=1;
    string S;
    while (n>0)
    {
        x = n % 16;
        
        if (x < 10)  
            S[d] = x + 48;

        if (x >= 10)
            S[d] = x + 55; 

        n/=16;
        d++;
    }

    for(long long i = d-1; i >= 1; i--)
        cout<<S[i];
}

main(void)
{
    string A;
    long long n;
    cin>>A;
    
    n = BinToDec(A);
    DecToHex(n);

    return 0;

}
