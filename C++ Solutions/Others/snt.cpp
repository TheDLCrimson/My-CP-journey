#include<bits/stdc++.h>
using namespace std;

bool Prime(int n)
{
	if(n<2) return false;
    for(int i=2; i<=sqrt(n); i++)
        if(n % i == 0) 
			{	
				return false;
				break;
			}
	return true;		   
}

main(void)
{
    int k,x,y,z,d=0;
    cin>>k;
    if(k%2==0) cout<<"2";
    else if(Prime(k)==true) cout<<k;
    else for(int i=3;i<=k/2;i++)
    	 if( (k%i==0) && (Prime(i)==true) )
		{
            cout<<i;
            break;
    	}
    cout<<"\n";

    for(x=2;x<=k/3;x++)
        for(y=x;y<=((k/3)*2);y++)
            for(z=y;z<=k-2;z++)
                if ( (Prime(x)==true) && (Prime(y)==true) && (Prime(z)==true) && (x+y+z==k) )
                     d++;

    if(d==0) cout<<"0";
    else {
    cout<<d<<"\n";
    for(x=2;x<=k/3;x++)
        for(y=x;y<=(k/3)*2;y++)
            for(z=y;z<=k-2;z++)
                if ( (Prime(x)==true) && (Prime(y)==true) && (Prime(z)==true) && (x+y+z==k) )
                    cout<<x<<" "<<y<<" "<<z<<"\n";
    }

	return 0;	
}





