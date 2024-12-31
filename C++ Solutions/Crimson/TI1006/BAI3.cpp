#include<bits/stdc++.h> 
using namespace std; 

main(void) 
{ 
    //freopen("BAI3.inp","r",stdin);
	//freopen("BAI3.out","w",stdout);
    
    int n, k, m;
    cin>>n>>k>>m;

    bool Check[n+1];

    for (int i = 1; i <= n; ++i)
        Check[i] = true;
    
    for (int i = 1; i < n; ++i)
    {
        int x = k - 1;
        
        while(x != 0)
        {
            //First Check
            while(Check[m] == false)
            {
                ++m;
                if (m > n) 
                    m -= n;   
            }
            //Counting Up
            ++m;
			if (m > n) 
                m -= n;
            //Second Check
            while(Check[m] == false)
                {
                    ++m;
                    if (m > n) 
                        m -= n;
            	}
            --x;    
        }
        //Last Check
        if(Check[m] == true)
        {
            cout << m << "\n";
            Check[m] = false;
        }
    
    }
    
    for (int i = 1; i <= n; i++)
        if(Check[i] == true)
        {
            cout<<i;
            return 0;
        }
    
    return 0; 
} 
