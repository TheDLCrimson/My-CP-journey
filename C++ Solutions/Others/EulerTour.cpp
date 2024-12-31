#include<bits/stdc++.h> 
using namespace std; 

#define MAX 1001
typedef vector<int> vi;

void Connect(vi *adj, int u, int v) 
{ 
    adj[u].push_back(v); 
    adj[v].push_back(u);                  
} 

// Another way is to store the node into an array, then print the whole array out

void EulerTour(vi *adj, int v, bool *Check) 
{ 
    cout<<v<<" "; 
    Check[v] = true;
    for (auto x : adj[v]) 
        if(Check[x] == false)
        {    
            EulerTour(adj, x, Check);
            cout<<v<<" ";                
        }
} 
  
int main() 
{ 
    int n, m, vec, x, y; 
    cin>>n>>m;
    vector<int> A[MAX];
    bool *Check = new bool[MAX]; 
    for (int i = 0; i < MAX; i++) 
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
            EulerTour(A, x.first, Check);

    return 0; 
} 
