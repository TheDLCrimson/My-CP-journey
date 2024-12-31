#include <bits/stdc++.h> 
using namespace std; 

main(void)
{
    int nl,rl,pl,sl,d=0;
    string N, R, P, S;
	cin>>N>>R>>P;
    nl = N.length();
    rl = R.length();
    pl = P.length();
    
    if ( nl + rl == pl)
    {
        sl = nl + rl;
        S = N + R;

        for (int i = 0; i < sl-1; i++ )
            for (int j = i+1; j < sl; j++ )
            {
                if( int(S[i]) > int(S[j]) )    swap( S[i], S[j] );
                if( int(P[i]) > int(P[j]) )    swap( P[i], P[j] );
            }

    }
	else
	{
		cout<<"NO";
		return 0;
	}
	
	if (S.compare(P) == 0)	cout<<"YES";  
    else cout<<"NO";
    
	return 0;
}