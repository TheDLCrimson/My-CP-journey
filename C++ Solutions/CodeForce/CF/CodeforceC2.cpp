#include <bits/stdc++.h>
using namespace std; 
  
main(void) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m, x = 4, y = 2;
    
    cin>>n;
    
    if (n % 2 == 0)
    {
        cout<<"NO";
        return 0;
    }
    cout<<"YES \n";
    cout<<"1 ";

    if(n == 1)
    {
        cout<<2;
        return 0;
    }
    
    if ( n > 1)
    {
        m = (n-1) / 2;  
        for(int i = 1; i <= m; i++ )
        {
            cout<<x<<" "<<x + 1<<" ";
            x += 4;
        }
        
        for(int i = 1; i <= m; i++ )
        {
            cout<<y<<" "<<y + 1<<" ";
            y += 4;
        }

    cout<<n*2;
    }
}

    
