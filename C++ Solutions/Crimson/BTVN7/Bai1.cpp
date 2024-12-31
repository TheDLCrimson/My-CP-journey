#include<bits/stdc++.h>

using namespace std;

void Solve(string S)
{
    int l = S.length(), sum = 0;
    int *A = new int[7];
    bool zero = false;
    for (int i = 0; i < l; ++i)
    {
        A[i] = S[i] - '0';
        sum += A[i];
        if (A[i] == 0)
            zero = true;
    }
    if (!zero || (sum % 3 != 0))
    {
        cout << "-1 \n";
        return;
    }

    sort(A, A + l, greater<int>());
    for (int i = 0; i < l; ++i)
        cout<<A[i];

    cout<<"\n";
}

main(void)
{
    //freopen("Bai1.INP","r",stdin);
    //freopen("Bai1.OUT","w",stdout);

    int n;
    cin >> n;
    
    while(n--)
    {
        string S;
        cin >> S;

        Solve(S);
    }
    
    return 0;
}