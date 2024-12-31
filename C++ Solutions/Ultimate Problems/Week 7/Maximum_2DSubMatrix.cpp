#include <bits/stdc++.h>
#define ll long long
using namespace std;

//CODE BY CRIMSON XD

ll Left, Up, Right, Down, maxSum = INT_MIN;

void Kanade(vector<ll> A, ll L, ll R)
{
    ll currSum, genSum, currUp, currDown;
    currSum = genSum = A[0]; //currentSum & generalSum
    currUp = currDown = 0;   //start and end
    for (ll i = 1; i < A.size(); ++i)
    {   
        currSum += A[i];
        if(A[i] > currSum)
        {
            currSum = A[i];
            currUp = i;
            currDown = i;
        }
        if(genSum < currSum)
        {
            genSum = currSum;
            currDown = i;   
        }
    }
    
    if(maxSum < genSum)
    {
        maxSum = genSum;
        Up = currUp;
        Down = currDown;  
        Left = L;
        Right = R;
    }
    
}

main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, m, x;
    cin >> n >> m;
    vector<ll> Mat[n];
    
    for (ll i = 0; i < n; ++i)
        for (ll j = 0; j < m; ++j)   
        {
            cin >> x;
            Mat[i].push_back(x);
        }
    
    vector<ll> A;
    for(ll l = 0; l < m; ++l)
    {
        for(ll i = 0; i < n; ++i)
                A.push_back(Mat[i][l]);
        Kanade(A, l, l);
        
        for(ll r = l + 1; r < m; ++r)
        {
            for(ll i = 0; i < n; ++i)
                A[i] += Mat[i][r];
            
            Kanade(A, l, r);
        } 
        //cout << maxSum << "\n" << Up << " " << Left << "\n" << Down << " " << Right << "\n";
        A.clear();
    }
    
    cout << maxSum;
    //cout << "\n" << Up << " " << Left << "\n" << Down << " " << Right << "\n";
    
    return 0;
}
