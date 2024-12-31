#include<bits/stdc++.h>

using namespace std;

main(void) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    
    while(t--)
    {
        int n, x;
        cin >> n;
        int *A = new int[n];
        for (int i = 0; i < n; ++i)
            cin >> A[i];
        sort(A, A + n, greater<int>());
        
        for (int i = 0; i < n - 1; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                if(__gcd(x, A[i+1]) < __gcd(x, A[j]))
                    swap(A[i + 1], A[j]); 
            }
            x = __gcd(x, A[i+1]);
        }
        
        for (int i = 0; i < n; ++i)
            cout << A[i] << " ";

        cout << "\n";

	}

    return 0;
}


