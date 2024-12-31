#include<bits/stdc++.h> 
using namespace std; 

typedef vector<int> vi;
queue<int> Q;

void Connect(vi *adj, int u, int v) 
{ 
    adj[u].push_back(v); 
} 
  
void BFS(vi *adj, bool *Check) 
{ 
    while(!Q.empty())
    {
        int v = Q.front();
        cout<<v<<" "; 
        Check[v] = true;
        for (auto x : adj[v]) 
            if(Check[x] == false)
            {
                Q.push(x);  
                Check[x] = true;
            }
        Q.pop();
    }
} 
  
int main() 
{ 
    int n, m, vec, x, y; 
    cin>>n>>m;
    vector<int> A[1000];
    bool *Check = new bool[1000]; 
    for (int i = 0; i < 1000; i++) 
        Check[i] = false; 

    map<int, bool> Vec;


    for (int i = 0; i < m; i++)
    {
        cin>>x>>y;
        Connect(A, x, y);
        Vec[x] = 1;
        Vec[y] = 1;
    }
    
    for(auto x : Vec)
        if(Check[x.first] == false)
        {    
            Q.push(x.first);
            BFS(A, Check);
        }
    
    return 0; 
} 
