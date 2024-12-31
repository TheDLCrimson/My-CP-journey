#include<bits/stdc++.h>

#define ld long double

using namespace std;

int main()
{
    //freopen("BAI1.INP","r",stdin);
    //freopen("BAI1.OUT","w",stdout);
    //ios_base::sync_with_studio(0);
    //cin.tie(NULL);
    //cout.tie(NULL);
    
    ld a, b;
    cin >> a >> b;
    
    if (a == b)
    {
        cout << "=";
        return 0;
    }

    (a > b) ? cout << ">" : cout << "<";

    return 0;
}