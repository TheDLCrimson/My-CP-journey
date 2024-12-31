#include<bits/stdc++.h>
using namespace std;
main(void)
{
    int n, s, ans = 0, x = 0;
    cin >> n >> s;
    int A[n];
    for (int i = 0; i < n; i++)
        cin >> A[i];
    
    sort(A, A + n);

    while(s - ans >= A[x])
    {
        ans += A[x];
        ++x;
    }
    
    cout << ans;
    return 0;
}