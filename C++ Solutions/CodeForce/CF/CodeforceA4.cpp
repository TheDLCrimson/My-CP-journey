#include <bits/stdc++.h>
using namespace std; 
  
main(void) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long t;
    cin>>t;
    
    while(t--)
    {
        long b, p, f, h, c, ham = 0, beef = 0, chick = 0, profit = 0;
		
		cin>>b>>p>>f; 
        cin>>h>>c;

        ham = b / 2;

		if (ham >= p + f)
        {
            beef += p;
            chick += f;
        }
        else
        {
            if( h >= c)
            {
                if (ham <= p) beef += ham;
                else
                {
                    beef = p;
                    ham -= p;
                    chick += ham;
                }

            }
            else
            {
                if (ham <= f) chick += ham;
                else
                {
                    chick = f;
                    ham -= f;
                    beef += ham;
                }

            }
        
        }

        profit = (beef*h + chick*c) ;

        cout<<profit<<"\n";
    
	}
 
    return 0;
}
