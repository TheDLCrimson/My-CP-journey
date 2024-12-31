#include<bits/stdc++.h>

using namespace std;

main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while (t--)
    {
    
        int n;
        cin >> n;
        string Matrix[n];
        for (int i = 0; i < n; ++i)
                cin >> Matrix[i];
        
        //for (int i = 0; i < n; ++i)
        //    cout << Matrix[i] << "\n";
        bool ck = true;
        for (int i = n - 1; i >= 0; --i)
            for (int j = n - 1; j >= 0; --j)
            {
                if(Matrix[i][j] == '1')
                {
                    if(j == n - 1 || i == n - 1)
                        continue;
                    else if(Matrix[i+1][j] == '1' || Matrix[i][j+1] == '1')
                        continue;
                    else 
                    {
                        ck = false;
                        //cout << i << " " << j << "\n";
                        break; 
                    }
                }
            }
            
        (ck) ? cout << "YES \n" : cout << "NO \n";
        
    }

    return 0;
}