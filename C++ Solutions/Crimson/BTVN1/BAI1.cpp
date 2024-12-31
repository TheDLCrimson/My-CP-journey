#include<bits/stdc++.h>
using namespace std;

main(void)
{
    
    freopen("BAI1.inp","r",stdin);
	freopen("BAI1.out","w",stdout);

    string S, Z;
    int size = 0;
    getline(cin, S);
    bool *Check = new bool[256];

    for (int i = 0; i < S.length(); ++i)
    {    
        if( !Check[int(S[i])] )
        {
            ++size;
            Check[int(S[i])] = true;
        }
        
        if(S[i] != S[i+1])
            Z += S[i];

    }

    cout<<size<<"\n"<<Z;
    
    return 0;
}
