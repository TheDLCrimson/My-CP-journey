#include <bits/stdc++.h>
using namespace std; 

bool isBalance(string S)
{
    stack<char> Sta;

    for (int i = 0; i < S.length(); i++) 
    {
        if(S[i] == '(' || S[i] == '[' || S[i] == '{')
        {
            char close;
            switch(S[i])
            {
                case '(':
                    close = ')';
                    break;
                
                case '[':
                    close = ']';
                    break;

                case '{':
                    close = '}';
                    break;
            }
            
            Sta.push(close); 
        }
            
        else if(S[i] == ')' || S[i] == ']' || S[i] == '}' )
        {
            if(Sta.empty() || Sta.top() != S[i] )
                return false;
            else
                Sta.pop();
        }
    }

    return ( Sta.empty() );
}

main(void) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string S;
    getline(cin,S);

    if( isBalance(S) )
        cout<<"That string is balanced!";
    else 
        cout<<"That string is NOT balanced!";

    return 0;
    
}


