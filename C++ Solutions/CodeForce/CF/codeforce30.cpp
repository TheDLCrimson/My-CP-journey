#include <bits/stdc++.h> 
using namespace std; 

main(void)
{
    long l,d=0;
    bool check[27];
    string S;
	getline(cin, S);
    l = S.length();
    
    for (long i = 1 ; i <= 26; i++)
        check[i] = false;

    for (long i = 1 ; i < l; i+=3)
        check[ long(S[i]-96) ] = true; 
    
    for (long i = 1 ; i <= 26; i++)
        if (check[i] == true)
            d++;

	cout<<d;
    
    return 0;
}
