#include <bits/stdc++.h>
using namespace std;

string Plus(string A, string B)
{
    if (A.length() <  B.length())
        swap(A, B);
    
    int a = A.length();
    int b = B.length();
    int carry = 0;
    string S = "";

    reverse(A.begin(), A.end()); 
    reverse(B.begin(), B.end()); 

    for (int i = 0; i < b; i++)
    {
        int sum = (A[i] - '0') + (B[i] - '0') + carry;
        S.push_back((sum % 10) + '0');
        carry = sum / 10;
    }
    
    for (int i = b; i < a; i++)
    {
        int sum = (A[i] - '0') + carry;
        S.push_back((sum % 10) + '0');
        carry = sum / 10;
    }

    if(carry == 1)
        S.push_back(carry + '0');

    reverse(S.begin(), S.end());  
    while(S[0] == '0' && S.length() > 1)
        S.erase(S.begin());

    return S;
}

main(void)
{
    freopen("BAI1.INP", "r", stdin);
    freopen("BAI1.OUT", "w", stdout);
    string S1, S2;
    cin>>S1;
    cin>>S2;
    
    cout<<Plus(S1, S2);
    
    return 0;
}
