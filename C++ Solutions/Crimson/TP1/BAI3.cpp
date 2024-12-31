#include<bits/stdc++.h>

#define ull unsigned long long int

using namespace std;

ull power(ull x, ull y)  
{  
    ull temp;  
    if(y == 0)  
        return 1;  
    temp = power(x, y / 2);  
    if (y % 2 == 0)  
        return temp * temp;  
    else
        return x * temp * temp;  
    
}  

void Solve(ull a, ull b, ull k)
{
    //ull i = 5;
    for(ull i = 1; i <= 18; ++i)
    {
        ull N = (a * power(10, i + 1) + b) / (k - 10);
        ull x = (a * power(10, i + 1) + N * 10 + b);
        if (N * k == x)
        {
            cout << N ;//<< " " << x << " " << N * k;
            return;
        }
    }
    cout << "NOT FOUND";
    
}

main(void)
{
    //freopen("BAI1.INP","r",stdin);
    //freopen("BAI1.OUT","w",stdout);

    ull a, b, k;
    cin >> a >> b >> k;
   
    Solve(a, b, k);

    return 0;
}