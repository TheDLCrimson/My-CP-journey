#include<bits/stdc++.h>
#define ll long long
using namespace std;

main(void)
{
    freopen("BAI1.INP","r",stdin);
    freopen("BAI1.OUT","w",stdout);
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    
    map<string, string> Convert;
    Convert["0000"] = "0";
    Convert["0001"] = "1";
    Convert["0010"] = "2";
    Convert["0011"] = "3";
    Convert["0100"] = "4";
    Convert["0101"] = "5";
    Convert["0110"] = "6";
    Convert["0111"] = "7";
    Convert["1000"] = "8";
    Convert["1001"] = "9";
    Convert["1010"] = "A";
    Convert["1011"] = "B";
    Convert["1100"] = "C";
    Convert["1101"] = "D";
    Convert["1110"] = "E";
    Convert["1111"] = "F";

    string S, X;
    string A = "";
    cin >> S;

    while(S[0] == '0' && S.length() > 1) 
        S.erase(0, 1);

    while(S.length() % 4 != 0)
        S = '0' + S;
    
    for(ll i = 0; i < S.length(); i+=4)
    {
        X = S.substr(i, 4);
        A = A + Convert[X];
    }

    cout << A;

    return 0;
}


