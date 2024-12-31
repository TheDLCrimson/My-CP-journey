#include<bits/stdc++.h>
using namespace std;

long Sum(long n)
{
    long i,p,x,s=0;
    p=n;
    x=p%10;
    while(p!=0)
    {
        i=p%10;
        s+=i;
        p/=10;
    }
    
    return s;
}

void FindY(long n)
{
    long r=Sum(n),y;
    for(long i=1;i<=n;i++)
    {
        if(Sum(i)==r) 
        {
            y=i;
            break;
        }
    }

    cout<<y;
    cout<<"\n";
}

void FindZ(long n)
{
    long r=Sum(n),z;
    for(long i=1;i<=n/2;i++)
    {
        if(Sum(i)+r==Sum(i+n)) 
        {
            z=i;
            break;
        }
    }

    cout<<z;
    cout<<"\n";
}

main(void)
{
    long n;
    cin>>n;
    cout<<"\n";
    cout<<Sum(n)<<" "<<n%10n;
    cout<<"\n";
    FindY(n);
    FindZ(n);

    return 0;
}





