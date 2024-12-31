#include<bits/stdc++.h>

using namespace std;

main(void) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, maxDay = 1, countDay = 1;
    cin >> n;
    int *A = new int[n];

    for (int i = 0; i < n; ++i)
        cin >> A[i];
    
    for (int i = 0; i < n - 1; ++i)
    {
        if(A[i] <= A[i+1])
            ++countDay;
        else 
            countDay = 1; 
        
        maxDay = max(maxDay, countDay);
    }

    cout << maxDay;

    return 0;
}


