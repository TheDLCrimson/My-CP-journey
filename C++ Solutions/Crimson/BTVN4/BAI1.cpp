#include <bits/stdc++.h> 
using namespace std; 

void Solve(int n)
{
    bool Prime[n+1]; 
    int total = 0;
    vector<int> A;

    // Prime matrix
    Prime[0] = false;
    Prime[1] = false;
    for (int i = 2; i <= n; ++i)  
        Prime[i] = true;
  
    for (int p = 2; p*p <= n; ++p) 
    { 
        if (Prime[p] == true) 
        {  
            for (int i = p*p; i <= n; i += p) 
                Prime[i] = false; 
        } 
    } 
    /*
    for (int p=2; p<=n; p++) 
       if (Prime[p]) 
          cout << p << " "; 
    */
    //---------------------------------------------------
    
    // Finding prime numbers
    for (int i = 1; i <= n; ++i)
    {
        int x = i;
        while(Prime[x] && x >= 10)
           x = x / 10;
    
        if(Prime[x] && x < 10)
        {
           A.push_back(i);
            ++total;
        }
    }
    //------------------------------------------------------
    //Printing
    cout << total << "\n";
    for (int i = 0; i < total; ++i)
    {
        cout << A[i];
        if(i != total - 1)
            cout<<", ";
    }

}

main(void) 
{ 
    freopen("BAI1.inp","r",stdin);
	freopen("BAI1.out","w",stdout);
    
    int n;
    cin >> n;
    Solve(n);
    
    return 0; 
} 

// ANOTHER WAY TO SETUP WITH MAP
//struct isPrime
//{
//    bool P = true;
//};
//map<ll, isPrime> Prime;
//ll MAX = 1e9; 
//void Prepare()
//{
//    for(ll i = 2; i * i <= MAX; ++i)
//    {
//        if (Prime[i].P == true)
//            for (ll x = i * i; x <= MAX; x += i)
//                Prime[i].P = false;
//    }
//    for(ll i = 0; i <= 4; ++i)
//        Prime[i].P = true;
//}