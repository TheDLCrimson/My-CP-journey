#include <bits/stdc++.h> 

using namespace std; 

vector<int> Data;

void Print()
{
    for (auto x : Data)
        cout << x <<" ";

    cout << "\n";
}

void Combinations(int n, int k, bool *check, int min)  
{  
    if (Data.size() == k)  
        Print(); 
    else 
    {
        for(int i = min; i <= n; ++i)
        {
            if (check[i]) continue;
            //if (i > min)
            //{
                check[i] = true;
                Data.push_back(i);
                Combinations(n, k, check, i + 1);
                //bacctracc
                Data.pop_back();
                check[i] = false;
            //}   
        }
    }
}

  
main(void)  
{  
    //freopen("BAI3.INP","r",stdin);
    //freopen("BAI3.OUT","w",stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    
    int *A, n, k;  
    cin >> n >> k;
    bool check[101];
  	for (int i = 1; i <= n ; i++)
        check[i] = false;
    Combinations(n, k, check, 1);  
    
    return 0;  
}  
  

