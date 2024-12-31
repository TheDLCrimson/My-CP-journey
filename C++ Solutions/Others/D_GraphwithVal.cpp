#include<bits/stdc++.h> 
using namespace std; 

typedef pair<int, int> ii;
typedef vector<ii> vii;

void Connect(vii *adj, int u, int v, int val) 
{ 
    adj[u].push_back(ii(v, val)); 
} 
  
void Print(vii *adj, int V) 
{ 
    for (int v = 0; v < V; ++v) 
    { 
        cout<<v<<" "; 
        for (auto x : adj[v]) 
           cout<<x.first<<" "<<x.second<<" "; 
        cout<<"\n";
    } 
} 
  
int main() 
{ 
    int n, m, vec, val; 
    cin>>n;
    vii A[n];
    for (int i = 0; i < n; i++)
    {
        cin>>m;
        for (int j = 0; j < m; j++)
        {
            cin>>vec>>val;
            Connect(A, i, vec, val);
        }
    }
    
    Print(A, n);

    return 0; 
} 
