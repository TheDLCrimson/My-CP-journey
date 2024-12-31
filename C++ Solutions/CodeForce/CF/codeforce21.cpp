#include <bits/stdc++.h> 
using namespace std; 

main(void)
{
    long a,b,c,max=-1,x[7];
    cin>>a>>b>>c;
    
    x[1]=a+b+c;
    x[2]=a*b*c;
    x[3]=(a+b)*c;
    x[4]=a*(b+c);
    x[5]=a+(b*c);
    x[6]=(a*b)+c;

    for(long i = 1; i <= 6; i++)
        if(x[i]>max) max=x[i];
    
    cout<<max;
    
    return 0;
}
