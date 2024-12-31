#include<bits/stdc++.h>

using namespace std;

bool isPerfect(string S)
{   
    int l = (S.length() / 2) - 1;
    int r;
    if (S.length() % 2 == 0)
        r = l + 1;
    else 
        r = l + 2;
 
    while (l >= 0 && r < S.length())
    {
        if (S[l] != S[r])
            return false;
        --l;
        ++r;            
    }

    return true;
}

main(void)
{
    //freopen("CAU4.INP","r",stdin);
    //freopen("CAU4.OUT","w",stdout);

    string X, A, B, S = "";
    cin >> X;
    if (isPerfect(X))
    {
        cout << "0\n" << X;
        return 0; 
    }
    A = X;
    while(A.length() > 1)
    {
        S = A[0] + S; 
        A.erase(0, 1);
        if (isPerfect(A) &&  A.length() > 1)
        {
            B = X + S;
            cout << B.length() - X.length() << "\n" << B;
            return 0;
        }
    }
    
    B = X + S;
    cout << B.length() - X.length() << "\n" << B;

    return 0;
}