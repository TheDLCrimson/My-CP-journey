#include<bits/stdc++.h>
using namespace std;

bool Check(int n)
{
    if ( (n<100) || (n>999) )
    return false;
    else return true;
}


main(void)
{
    int p,e,n,i,s=0;
    cin>>n;
    p=n/10;
    if(Check(n)==false) cout<<"n ko phai la so co 3 chu so ";
    else 
    {
       while(p!=0)
       {
           i=p%10;
           s+=(i*i*i);
           p/=10;
       } 
    }
    
    cout<<s;

    return 0;
}
