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
        int n, s = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s += x;
        }
        
        if (s > n / 2)
        {
            int len = s - (s % 2);
            cout << len << "\n";
            for (int i = 0; i < len; i++)
                cout << "1 ";
        }
        else
        {
            int len = n - s;
            cout << len << "\n";
            for (int i = 0; i < len; i++)   
                cout << "0 ";
        }
        
        cout << "\n";
        //cout << s << "\n";
	}

    return 0;
}
