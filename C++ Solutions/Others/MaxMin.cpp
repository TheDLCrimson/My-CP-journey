#include <bits/stdc++.h>
using namespace std;
int maxx(int n,int n1, int n2)
{
    int max1=n;
    if(max1<n1) max1=n1;
    if(max1<n2) max1=n2;
    return max1;
}
int minn(int n,int n1, int n2)
{
    int max1=n;
    if(max1>n1) max1=n1;
    if(max1>n2) max1=n2;
    return max1;
}
int main()
{
    int n;
    cin>>n;
    int m[n];
    for(int i=1; i<=n; i++)
        cin>>m[i];
    for(int i=1; i<=n-2; i++)
    {
       cout<<maxx(m[i], m[i+1], m[i+2])<<' ';
    }
    cout<<endl;
    for(int i=1; i<=n-2; i++)
    {
       cout<<minn(m[i], m[i+1], m[i+2])<<' ';
    }
}
