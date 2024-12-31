 #include<bits/stdc++.h>
using namespace std;

bool Prime(int n)
{
    if(n<2) return false;
    if(n>2)
	{
		if(n%2==0) return false;
		for(long long i=3; i<=sqrt(n); i+=2)
    		if(n%i==0) return false;
   	} 
   
   	return true;
}

main(void)
{
	long long n,a,b,d=0,p,B[100000];
	cin>>n;
    a=pow(10,(n-1));
	b=pow(10,n)-1;
	
    for(long long i=a; i<=b; i++)
    {
        if(Prime(i)==true) 
        {
            p=i;
            while(p!=0)
            {
                p/=10;
                if(Prime(p)==false) break;
            }
        	if(p==0)
			{
				d++;     
				B[d]=i;
			}
        }
    }

    cout<<d<<"\n";
    cout<<B[1]<<" "<<B[d]<<"\n";
    for(int i=1; i<=d; i++)
    	cout<<B[i]<<' ';
	
    return 0;

}
