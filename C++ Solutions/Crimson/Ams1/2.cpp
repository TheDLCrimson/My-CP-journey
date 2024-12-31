#include<bits/stdc++.h>

#define ull unsigned long long
 
using namespace std;  

vector<ull> List;
const ull Max = pow(10, 18);

ull power(ull x, ull y)
{
    if (y == 0)
        return 1;
    ull temp = power(x, y/2);
    if (y % 2 == 0)
        return temp * temp;
    else
        return x * temp * temp;
}

ull BinarySearch(ull n, ull l, ull r)
{
    if ( r >= l)
    {
        ull mid = l + (r - l) / 2;
        if (List[mid] == n)
            return mid;
        else if (List[mid] < n)
            return BinarySearch(n, mid + 1, r);
        else if (List[mid] > n)
            return BinarySearch(n, l, mid - 1);
    }

    return -1;
}

void Prepare()
{
    for (ull i = 0; i <= 21; ++i)//21
           for (ull j = 0; j <= 26; ++j)//26
               for (ull k = 0; k <= 38; ++k)//38
               {
                   if (i == 0 && j == 0 && k == 0)
                       continue;
                   ull x = power(3, k);
                   ull y = power(5, j);
                   ull z = power(7, i);
                   if (x > (Max / y) / z)
                       continue;
                   if (y > (Max / z) / x)
                       continue;
                   if (z > (Max / x) / y)
                       continue;
                   ull s = x * y * z;
                   List.push_back(s);
                   //cout << s << " =  3 ^ " << k << " * 5 ^ " << j << " * 7 ^ " << i << "\n";
               }

    sort(List.begin(), List.end()); 
    //for (auto i : List)
    //    cout << i << "\n";          
}

main(void) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   
    Prepare();
    
    ull t;
    cin >> t;
    while(t--)
    {
        ull x;
        cin >> x;
        ull index = BinarySearch(x, 0, List.size());
        (index != -1) ? cout << index + 1 : cout << "-1";
        cout << "\n";
    }
    
    //cout << List.size();
    return 0;
}
 