#include<bits/stdc++.h>
using namespace std;

int *Prf = new int[1000];
int size = 0, minp = 1;

bool isPrime(int n)
{
    if(n < 2)
        return false;
    if(n > 2)
    {
        if(n % 2 == 0)
            return false;
        for (int i = 3; i <= sqrt(n); i += 2)
            if(n % i == 0)
                return false;
    }
    
    return true;
}

void Fix(int k)
{
    if( isPrime(k) || k == 1 )
    {
        Prf[size] = k;
        ++size;
        return;
    }
    
    for (int i = 2; i <= k/2; ++i)
        if(k % i == 0 && isPrime(i) )
        {
            minp *= i;
            Prf[size] = i;
            ++size;
        }
}

bool Test(int n)
{
    if(n % minp != 0)
        return false;

    int i = 0, x = 0;
    int a = n;
    while (a > 1 && i < size)
    {
        if(a % Prf[i] == 0)
        { 
            a /= Prf[i];
        }
        else
            ++i;
    }
    
    if(a == 1)
        return true;
    
    return false;
}

main(void)
{
    
    freopen("BAI2.inp","r",stdin);
	freopen("BAI2.out","w",stdout);

    int n, k, ans = 0;
    cin>>n>>k;
    bool *Check = new bool[10001];
    int *C = new int[n];
    int *A = new int[n];
    for (int i = 0; i < n; ++i)
        cin>>A[i];
    
    Fix(k);

    for (int i = 0; i < n; i++)
        if(Test(A[i]) && !Check[A[i]])
        {   
            Check[A[i]] = true;
           C[ans] = A[i];
            ++ans;
        }

    sort(C, C+ans);
    cout<<ans<<"\n";
    for (int i = 0; i < ans; i++)
        cout<<C[i]<<" ";
    
    return 0;
}
