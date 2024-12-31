#include <bits/stdc++.h>
using namespace std;

int Fact(int);

main(void)
{
    system("CLS");
    
    int n;
    cin>>n;

    cout<<Fact(n);

    return 0;
}

int Fact(int a)
{
    if (a == 0)
        return 1;
        
    int pro = 1;
    for (int i = 1; i <= a; i++)
        pro *= i;
    
    return pro;

}