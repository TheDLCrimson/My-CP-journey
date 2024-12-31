#include <bits/stdc++.h>
using namespace std; 
  
main(void) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long k;
    cin>>k;
    while(k--)
    {
        long n, maxerr = 0;
        char s1, s2, t1, t2;
        cin>>n;
        string S, T;
        cin>>S;
        cin>>T;
		
        for (long i = 0; i < n; i++)
        {
        	if(S[i] != T[i])
        	{
        		maxerr++;
        		
        		if(maxerr == 1)
            	{
                	s1 = S[i];
                	t1 = T[i];
            	}
        
            	if(maxerr == 2)
            	{
               		s2 = S[i];
                	t2 = T[i];
            	}
        	}
        
        }

        if(maxerr > 2)  
            cout<<"No \n";  
    	else if(maxerr == 1)
            cout<<"No \n";
        
		if(maxerr == 2)
		{
			if(s1 == s2 && t1 == t2)
        		cout<<"Yes \n";
        	else
        		cout<<"No \n";
    	}
		
		if(maxerr == 0)
            cout<<"Yes \n";
        
    }


}
