#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int n, Max, node1, node2;

void connect(vi *A, int x, int y)
{
    A[x].push_back(y);
    A[y].push_back(x);
    // find max node
    if(Max <= A[x].size())
    {
        Max = A[x].size();
        node1 = x;
    }
    if(Max <= A[y].size())
    {
        Max = A[y].size();
        node1 = y;
    }
}

void Solve(vi *A, int s)
{
    bool isDone = true;
    for (int i = 1; i <= n; ++i)
        if (A[i].size() == Max && i != node1)
        {
            node2 = i;
            isDone = false;
            break;
        }
    

    if(isDone)
    {
        cout << node1 << " " << A[node1][0] << "\n";
        cout << node1 << " " << A[node1][0] << "\n";
        return;
    }
    
    if(Max > 2)
        for(auto x : A[node2])
            if(x != node2 && x != node1)
            {
                cout << node2 << " " << x << "\n";
                cout << node1 << " " << x << "\n";
                return;
            }
             
    
    for(auto x : A[node2])
        if(x != node2 && A[x].size() > 1)
        {
                cout << node2 << " " << x << "\n";
                cout << node1 << " " << x << "\n";
                return;
        }
    
}

main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> n;
        vi A[n+1];
        Max = 0;
        for(int i = 0; i < n - 1; ++i)
        {
            cin >> x >> y;
            connect(A, x, y);
        }

        Solve(A, 1);
    }

    return 0;
}