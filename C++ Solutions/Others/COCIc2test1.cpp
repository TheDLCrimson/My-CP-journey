#include <bits/stdc++.h>
using namespace std; 


int OpValue(char Op)
{
    int order;
    switch(Op)
    {
        case '+':
        case '?':
            order = 1;
            break;

        case '-':
            order = 0;
            break;
    }
    return order;
}

main(void) 
{ 
    int n,m,x;
    cin>>n>>m;
    
    int *Score = new int[n];
    int *Name = new int[n];
    for (int i = 1; i <= n; i++)
        Score[i] = 0;
   
    
    for (int i = 1; i <= n; i++)
    {
        string Team;
        cin>>Team;
        if(Team == "NijeZivotJedanACM") x = i;
        
        Name[i] = int(Team[1]);
        string Solu;
        for(int j = 1; j <= m; j++)
        {
            cin>>Solu;
            Score[i] += OpValue(Solu[1]);
        }
    
    }

    cin>>Team;
    Score[x] = 0;
    for(int j = 1; j <= m; j++)
    {
        cin>>Solu;
        Score[x] += OpValue(Solu[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        if(i == x) continue;

        if(Score[x] < Score[i])

    } 

    return 0;
    
}
