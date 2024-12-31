#include<bits/stdc++.h>
using namespace std;

void Solve(int n)
{
    int s=0,p,i;
    p=n/10;
    while(p!=0)
    {
        i=p%10;
        s+=i;
        p/=100;
    }  
    cout<<s;
}


main(void)
{
    int n;
    cin>>n;
    Solve(n);

    return 0;
}
