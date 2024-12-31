#include<bits/stdc++.h>

using namespace std;

int Solve(int n, int m)
{
    if (n >= m)
        return n - m;
    else
    {
        int x = 0;
        while (n < m)
        {
            (m % 2 == 1) ? ++m : m /= 2;
            ++x;
        }
        return n - m + x;
    }
    
}

main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;
    cin >> n >> m;

    cout << Solve(n, m);

    return 0;
}