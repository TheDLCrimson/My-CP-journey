#include<bits/stdc++.h>
 
#define ll long long
 
using namespace std;

ll minSkip(bool *A, ll n)
{
    ll skip = 0, i = 0;
    
    if(A[i] && i == 0)
    {
        ++skip;
        i++;
    }
    
    while(i < n - 2)
    {   
        if(A[i] && A[i+1] && A[i+2])
        {
            ++skip;
            i += 2;
        }
        ++i;
    }
    return skip;
}

main(void) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        bool *A = new bool[n];
        for (ll i = 0; i < n; ++i)
            cin >> A[i];

        cout << minSkip(A, n) << "\n"; 
    }
    
    return 0;
}
 