#include<bits/stdc++.h>
using namespace std;

int Solve(int a)
{
    int x;
	x=a*a*a;
    return x;
}
main()
{
    int a,b;
    cin>>a>>b;
    cout<<Solve(a)+Solve(b);
}
