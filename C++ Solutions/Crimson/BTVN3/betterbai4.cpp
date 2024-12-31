#include <bits/stdc++.h>

#define ll long long

using namespace std;

void Solve(ll n)
{
    ll len = 0, ans = 0, base = 1;  
    string S = "";
//----- Chuyen so thap phan sang xau nhi phan ----------------------
    while(n > 0)
    {
        bool a = (n % 2);
        if (a)
            S = "1" + S;
        else
            S = "0" + S;
        n /= 2;
    }
    
    cout<<S<<"\n";
//------ Hoan vi vong tron tim Max --------------------------------
    len = S.length(); 
    string Max = S;     
    ll k = len;
    while (k > 1)
    {
        S += S[0];
        S.erase(0, 1);
        if(Max < S)
            Max = S;
        --k;
    }
//----- Chuyen Xau nh phan sang so thap phan ------------------------
    
    for (ll i = len - 1; i >= 0 ; --i)
    {    
        if(Max[i] == '1')
            ans += ( ( int(Max[i])- 48 ) * base );

        base *= 2;
    }

    cout<<ans;
}

main(void)
{
    //freopen("CAU4.inp","r",stdin);
    //freopen("CAU4.out","w",stdout);

    ll num;
    cin >> num;

    Solve(num);

    return 0;
}
