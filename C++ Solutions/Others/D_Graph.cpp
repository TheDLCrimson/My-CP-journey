#include<bits/stdc++.h> 
using namespace std; 

typedef vector<int> vi;

void Connect(vi *adj, int u, int v) 
{ 
    adj[u].push_back(v); 
} 
  
void Print(vi *adj, int V) 
{ 
    for (int v = 0; v < V; ++v) 
    { 
        cout<<v<<" "; 
        for (auto x : adj[v]) 
           cout<<x<<" "; 
        cout<<"\n";
    } 
} 
  
int main() 
{ 
    int n, m, vec; 
    cin>>n;
    vi A[n];
    for (int i = 0; i < n; i++)
    {
        cin>>m;
        for (int j = 0; j < m; j++)
        {
            cin>>vec;
            Connect(A, i, vec);
        }
    }
    
    Print(A, n);

    return 0; 
} 
