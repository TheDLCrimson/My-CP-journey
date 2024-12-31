#include<bits/stdc++.h>

using namespace std;

main(void)
{
    //freopen("BAI2.INP","r",stdin);
    //freopen("BAI2.OUT","w",stdout);
  
    int *A, *Sum;
    int n;
    cin >> n;
    A = new int[10000];
    Sum = new int[10000];
    for (int i = 0; i < n; ++i)
    {
        cin >> A[i];
        Sum[i] = A[i];
    }
    int Maxsum = Sum[0];
    for (int i = 1; i < n; ++i)
        for (int j = 0; j < i; ++j)
            if (A[j] < A[i] && Sum[j] + A[i] > Sum[i])
            {
                Sum[i] = Sum[j] + A[i];
                Maxsum = max(Sum[i], Maxsum);
            }
       
    for (int i = 0; i < n; i++)
        cout << Sum[i] << " ";
    cout<<"\n";
    
    cout << Maxsum;

    return 0;
}