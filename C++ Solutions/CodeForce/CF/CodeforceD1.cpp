#include <bits/stdc++.h>
using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char s[1001]; 
    gets(s); 
    int l = strlen(s);
    long long ans = 1, x = 0;
    
    for (int i=0; i<l; i++)
    {
        if (s[i] <= s[i+1])
            s[i] = 48;
        
    }
    
    
    cout << s;
    
    return 0;
}
