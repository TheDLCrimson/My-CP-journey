#include<bits/stdc++.h>

using namespace std;

main(void) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long t;
    cin >> t;
    
    while(t--)
    {
        long long a, b, x;
        cin >> a >> b;

        x = abs(a - b) / 10;
        if(abs(a - b) % 10 != 0)
            ++x;

        cout << x << "\n";
	}

    return 0;
}
