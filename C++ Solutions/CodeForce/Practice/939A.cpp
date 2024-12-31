#include<bits/stdc++.h>
using namespace std;

main(void)
{
    int n;
    cin >> n;
    int *A = new int[n+1];

    for (int i = 1; i <= n; ++i)
    {
        cin >> A[i];
    }

    bool ck = false;
    for (int i = 1; i <= n && !ck; ++i)
        if (i == A[A[A[i]]] )
        {
            ck = true;
            //cout << A[i] << " " << A[A[i]] << " " << A[A[A[i]]] << "\n";
        }
    
    (ck) ? cout << "YES" : cout << "NO";
    
    return 0;
}

//&& i != A[A[i]]