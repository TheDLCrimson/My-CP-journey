#include <bits/stdc++.h>
#define ll long long
using namespace std;

//CODE BY CRIMSON XD

string Mul(string A, string B)
{
    if (A == "0" || B == "0")
        return "0";

    ll op = 0;
    if (A[0] == '-')
    {
        A.erase(0, 1);
        ++op;
    }
    if (B[0] == '-')
    {
        B.erase(0, 1);
        ++op;
    }

    ll a = A.length();
    ll b = B.length();
    //cout << A << " " << B << "\n";
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

    while (S[0] == '0' && S.length() > 1)
        S.erase(0, 1);

    if (op % 2 != 0 && S != "0")
        S = '-' + S;

    return S;
}

string compMax(string A, string B)
{
    if (A.length() < B.length())
        swap(A, B);

    if (A[0] == '-' && B[0] != '-')
        return B;
    else if (A[0] != '-' && B[0] == '-')
        return A;
    else if (A.size() == B.size())
    {
        if (A[0] == '-' && B[0] == '-')
        {
            if (A.compare(B) < 0)
                return A;
            else
                return B;
        }
        else
        {
            if (A.compare(B) < 0)
                return B;
            else
                return A;
        }
    }
    else
    {
        string S = B;
        while (S.length() < A.length())
            S = (char)('0') + S;
        if (A.compare(S) < 0)
            return B;
        else
            return A;
    }
}

string compMin(string A, string B)
{
    if (A.length() < B.length())
        swap(A, B);

    if (A[0] == '-' && B[0] != '-')
        return A;
    else if (A[0] != '-' && B[0] == '-')
        return B;
    else if (A.size() == B.size())
    {
        if (A[0] == '-' && B[0] == '-')
        {
            if (A.compare(B) < 0)
                return B;
            else
                return A;
        }
        else
        {
            if (A.compare(B) < 0)
                return A;
            else
                return B;
        }
    }
    else
    {
        string S = B;
        while (S.length() < A.length())
            S = (char)('0') + S;
        if (A.compare(S) < 0)
            return A;
        else
            return B;
    }
}

string Kanade(vector<string> S)
{
    string ans = S[0], minProd = S[0], maxProd = S[0];
    string Neg, Pos;
    for (int i = 1; i < S.size(); ++i)
    {
        Neg = Mul(minProd, S[i]);
        Pos = Mul(maxProd, S[i]);
        minProd = compMin(S[i], compMin(Neg, Pos));
        maxProd = compMax(S[i], compMax(Neg, Pos));
        //cout << maxProd << " " << minProd << " " << ans << "\n";
        ans = compMax(ans, maxProd);
    }

    return ans;
}

main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<string> S;
    string line;
    while (getline(cin, line))
    {
        stringstream ss(line);
        string num;

        while (ss >> num)
        {
            S.push_back(num);
            if (num == "-999999")
                S.pop_back();
        }

        cout << Kanade(S) << "\n";
        S.clear();
    }
    return 0;
}
