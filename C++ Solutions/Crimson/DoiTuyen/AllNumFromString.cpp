#include<bits/stdc++.h> 
using namespace std; 

main(void) 
{ 
    int num = 0;
    unordered_map<int, bool> Number;

    string T; 
    cin>>T;

    for (int i = 0; i < T.length(); i++)
    {
        if(T[i] >= '0' && T[i] <= '9')
        {
            num = num * 10 + (T[i] - '0');    
        }
        else
        {
            Number[num] = 0;
            num = 0;
        }
    
        if(T[i]=='0') Number[0] = 1;
    }
    

    for (auto i : Number)
    {    
        if(i.first != 0 && i.second == 0)
            cout<<i.first<<" ";
        else if(i.first == 0 && i.second == 1)
            cout<<i.first<<" ";
    }
    return 0; 
} 
