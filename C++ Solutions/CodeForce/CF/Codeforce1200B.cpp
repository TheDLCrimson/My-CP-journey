#include <bits/stdc++.h>
using namespace std; 
  
main(void) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long n, *Game, t, block, skip, need ;
    cin>>t;
    
    while(t--)
    {
        cin>>n>>block>>skip;
        Game = new long[n+1];
        bool res = true;
 
        for (long i = 0; i < n; i++)
            cin>>Game[i];
 
        for (long i = 0; i < n-1; i++)
        {
            
            if ( Game[i] > (Game[i+1] - skip ) )
            {
                if (Game[i+1] - skip < 0)
                    need = Game[i];
                else    
                    need = Game[i] - (Game[i+1] - skip);
                
                block += need;
                Game[i] -= need;
            }
            
            if ( Game[i] < (Game[i+1] - skip) )
            {
                
                need = Game[i+1] - (Game[i] + skip);
                block -= need;
                Game[i] += need;
                
                if( block < 0 )
                {
                    res = false;
                    break;
                }
 
            }
            
        }
        
        if(n==1) res = true;
 
        if( res == false ) cout<<"NO \n";
        if( res == true ) cout<<"YES \n";
    

	}
 
    return 0;
}
