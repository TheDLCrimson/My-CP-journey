#include<bits/stdc++.h>
 
#define ull unsigned long long
 
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

main(void) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    //ull x = power(7, 21);
    //ull y = pow(7, 21);
    //cout << x << "\n" << y;

    ull *A = new ull[10000000];
    for (ull i = 0; i < power(10, 7); i++)
        A[i] = i;
    
    cout << A[power(10, 7) - 1];
    return 0;
}
 