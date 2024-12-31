#include<bits/stdc++.h>

using namespace std;

main(void)
{
    freopen("CAU3.INP","r",stdin);
    freopen("CAU3.OUT","w",stdout);

    int n, ans;
    cin >> n;
    int *A = new int[10000];

    for (int i = 0; i < n; ++i)
        cin >> A[i];

    sort(A, A + n);
    ans = max(A[0] * A[1], A[n-2] * A[n-1]);
    
    cout << ans;

    return 0;
}