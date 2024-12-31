#include<bits/stdc++.h>
using namespace std;

void Count(int n)
{
    int d=0;
    for(int i=15; i<=n; i+=15)
        d++;
    
    cout<<d;
    cout<<"\n";

}

void Cal(int n)
{
    int s=0,i;
    int x=n;
    while(x!=0)
    {
        i=x%10;
        s+=i;
        x/=10;
    }
    
    cout<<s;
    cout<<"\n";
}

void Numof(int n)
{
    int s=1,j,d;
    if(n>=10)
    for(int i=10; i<=n; i++)
    {
        d=i;
        while(d!=0)
        {
            j=d%10;
            if(j==1) s++;
            d/=10;
            
        }
    }   
        cout<<s;
        cout<<"\n";
}

void Spenum(int n)
{
    int a[30000], d=0;
    for(int i=1; i<=30000; i++)
        for(int j=1; j<=i/2; j++) 
            if(i%j==0) a[i]+=j;
    
    for(int i=1; i<=n; i++)
        if(a[i]==i) cout<<i<<" ";
    
}

main(void)
{
    int n;
    cin>>n;
    Count(n); 
    Cal(n);   
    Numof(n); 
    Spenum(n);

    return 0;
}
