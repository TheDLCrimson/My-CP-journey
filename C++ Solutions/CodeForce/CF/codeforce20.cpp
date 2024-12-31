#include <bits/stdc++.h> 
using namespace std; 

main(void)
{
    long l,d=0;
    string S;
    cin>>S;
    l = S.length();
    
    if(S[0]>=97)
    {
        if(l==1)
        {
            cout<<char(S[0]-32);
            return 0;
        } 
        else
        {
            for (long i = 1; i < l; i++)
                if(S[i]<97) d++;
            
            if(d==l-1) 
            {
                for (long i = 1; i < l; i++)
                    S[i]+=32;
                S[0]-=32;
            }
        }       
    }
    else
    {
        for (long i = 1; i < l; i++)
            if(S[i]<97) d++;

        if(d==l-1)
            for (long i = 0; i < l; i++)
                    S[i]+=32;
    }
     
    cout<<S;
        


    return 0;
}
