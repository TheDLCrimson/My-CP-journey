#include<bits/stdc++.h>

using namespace std;
 
main(void)
{
    freopen("BAI1.INP","r",stdin);
    freopen("BAI1.OUT","w",stdout);

    string A, B, S = "";
    int x, carry = 0;
    cin>>A>>B;

    if (A.length() > B.length())
        swap(A, B);

    while (A.length() != B.length())
        A = '0' + A;

    for (int i = A.length() - 1; i >= 0; i--)
        {
            x = (A[i] - '0') + (B[i] - '0') + carry;
            carry = x / 10;
            S = char(x % 10 + '0') + S;
        }
    if (carry > 0)
        S = '1' + S;

    cout << S;
    return 0;
}