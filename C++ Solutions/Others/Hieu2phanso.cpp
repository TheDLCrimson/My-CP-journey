#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b)
{
    if (a<b) swap(a,b);
    while(b!=0)
    {
        a%=b;
        swap(a,b);
    }

    return abs(a);
}

main(void)  
{
    int a,b,c,d,k=0,x;
    cin>>a; int a1=a;
    cin>>b; int b1=b;
    cin>>c; int c1=c;
    cin>>d; int d1=d;
    if(GCD(a1,b1)!=GCD(c1,d1)) cout<<"-1";
    else
    {
        int i=GCD(a,b);
        if(a<b) 
        {
            swap(a,b);
            k++;
        }
        while(a!=x)
        {
            a-=b;
            k++;
        }
        if(a<b) 
        {
            swap(a,b);
            k++;
        }
        if(c<d)
        {
            k++;
            swap(c,d);
        }
        while(a!=d)
        {
            a+=b;
            k++;
        }
        k+=2;
            
    }

    cout<<k;

    return 0;

}






