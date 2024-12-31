#include <bits/stdc++.h>

#define ll long long

using namespace std;

string Plus(string A, string B)
{
    if (A.length() <  B.length())
        swap(A, B);
    
    ll a = A.length();
    ll b = B.length();
    ll carry = 0;
    string S = "";

    reverse(A.begin(), A.end()); 
    reverse(B.begin(), B.end()); 

    for (ll i = 0; i < b; i++)
    {
        ll sum = (A[i] - 48) + (B[i] - 48) + carry;
        S.push_back((sum % 10) + 48);
        carry = sum / 10;
    }
    
    for (ll i = b; i < a; i++)
    {
        ll sum = (A[i] - 48) + carry;
        S.push_back((sum % 10) + 48);
        carry = sum / 10;
    }

    if(carry == 1)
        S.push_back(carry + 48);

    reverse(S.begin(), S.end()); 
    while(S[0] == '0' && S.length() > 1) 
        S.erase(0, 1);
    
    return S;
}

string Minus(string A, string B)
{
    bool low = false;
    if (A.length() <  B.length())
    {
        swap(A, B);
        low = true;
    }
    ll a = A.length();
    ll b = B.length();
    ll carry = 0;
    string S = "";

    reverse(A.begin(), A.end()); 
    reverse(B.begin(), B.end()); 

    for (ll i = 0; i < b; i++)
    {
        ll sum = (A[i] - 48) - (B[i] - 48) - carry;
        if(sum < 0) 
        {
            sum += 10;
            carry = 1;
        }
        else 
            carry = 0;
        
        S.push_back(sum + 48);
    }
    
    for (ll i = b; i < a; i++)
    {
        ll sum = (A[i] - 48) - carry;
        if(sum < 0) 
        {
            sum += 10;
            carry = 1;
        }
        else 
            carry = 0;
        
        S.push_back(sum + 48);
    }
    
    reverse(S.begin(), S.end()); 
    while(S[0] == '0' && S.length() > 1) 
        S.erase(0, 1);

    if (low && S != "0")
        S = "-" + S;
    return S;
}

string Divided(string S) // by 2
{
    string X = "";
    ll res = 0, carry = 0, temp;
    for(ll i = 0; i < S.length(); ++i)
    {
        temp = (carry * 10 + (ll)S[i] - '0');
        res = temp / 2;
        X = X + (char)(res + '0');
        carry = temp % 2;
    }

    while(X[0] == '0' && X.length() > 1)
        X.erase(0, 1);
    
    return X;
}

string Mul (string A, string B)
{   
    if(A == "0" || B == "0")
        return "0";
    
    ll op = 0;
    if(A[0] == '-')
    {
        A.erase(0, 1);
        ++op;
    }
    if(B[0] == '-')
    {
        B.erase(0, 1);
        ++op;
    }
    
    ll a = A.length();
    ll b = B.length();
    cout << A << " " << B << "\n";
    vector<ll> mul((a + b - 1), 0);
    string S = "";
    
    for (ll i = 0; i < a; ++i)
        for (ll j = 0; j < b; ++j) 
            mul[i + j] += ((ll)A[i] - '0') * ((ll)B[j] - '0');
            
    for (ll i = mul.size() - 1; i > 0; --i)
    {
        mul[i - 1] += (mul[i] / 10);
        mul[i] %= 10;
        S = (char)(mul[i] + '0') + S;
    }
    while (mul[0] > 0)
    {
        S = (char)((mul[0] % 10) + '0') + S;
        mul[0] /= 10;
    }

    while(S[0] == '0' && S.length() > 1) 
        S.erase(0, 1);
    
    if (op % 2 != 0 && S != "0")
        S = '-' + S;
        
    return S;
}

main(void)
{
    string A, B;
    cin >> A;
    cin >> B;
    
    cout << "PLUS: " << Plus(A, B) << "\n";
    cout << "MINUS: " << Minus(A, B) << "\n";
    cout << "MUL: " << Mul(A, B) << "\n";
    cout << "DIVIDED BY 2: " << Divided(A) << " " << Divided(B);

    return 0;
}
