#include<bits/stdc++.h>

#define ull long long 

using namespace std;

vector<ull> List;

void Execute()
{
    const ull MAX = 1000050;
    bool *Prime = new bool[MAX];
    vector<ull> PRIME;
    
    Prime[0] = false;
    Prime[1] = false;
    for(ull i = 2; i < MAX; i += 10)
    {
        Prime[i] = true;    Prime[i+1] = true;
        Prime[i+2] = true;    Prime[i+3] = true;
        Prime[i+4] = true;    Prime[i+5] = true;
        Prime[i+6] = true;    Prime[i+7] = true;
        Prime[i+8] = true;    Prime[i+9] = true;
    }

    for(ull i = 2; i <= sqrt(MAX); ++i)
    {
        if (!Prime[i])
            continue;
        PRIME.push_back(i);
        for (ull j = i * i; j <= MAX; j += i)
        {
            Prime[j] = false;   Prime[j+i] = false;
        }
    }

    for (ull i = sqrt(MAX) + 1; i < MAX; ++i)
        if (Prime[i])
            PRIME.push_back(i);

    
    for (ull i = 0; i < PRIME.size() - 2; ++i)
    {
        ull p = PRIME[i] * PRIME[i+1] * PRIME[i+2];
        List.push_back(p);
    }

}

ull BinSearch (ull x, ull l, ull r)
{
    if(l <= r)
    {
        ull mid = l + (r - l) / 2;
        if (List[mid] == x)
            return List[mid];
        if (x > List[mid] && x < List[mid+1])
            return List[mid];
        
        if (List[mid] < x)
            return BinSearch(x, mid + 1, r);
        if (List[mid] > x)
            return BinSearch(x, l, mid - 1);
    }
    return -1;
}


main(void)
{
    //freopen("BAI1.INP", "r", stdin);
    //freopen("BAI1.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    Execute();
    ull t;
    cin >> t;
    while (t--)
    {
        ull n;
        cin >> n;
        ull ans = BinSearch(n, 0, List.size());
        (ans != -1) ? cout << ans : cout << "-1";
        cout << "\n";
    }
    

    return 0;
}