#include<bits/stdc++.h>
using namespace std;
 
 
 
main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m, x, y, mid;
    cin >> n >> m;
    bool *called = new bool[1001];
    for (int i = 1; i <= n; i++)
        called[i] = false;
 
    for (int i = 0; i < m; i++)
    {   
        cin >> x >> y;
        called[x] = true;
        called[y] = true;
    }
    
    for (int i = 1; i <= n; i++)
        if (!called[i])
        {
            mid = i;
            break;
        }
 
    cout << n - 1 << "\n";
    for (int i = 1; i <= n; i++)
    {
        if (i == mid)
            continue;
 
        cout << mid << " " << i << "\n";
    }
    
    return 0;
}