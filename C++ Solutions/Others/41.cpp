# include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("41.inp","r",stdin);
	freopen("41.out","w",stdout);
    int n,k,e,a,b,c,x[100],d;
    char input[10],A,B,m;
    cin>>n;
    while(n--)
    {
		memset(x,-1,sizeof(x));
    	cin>>m;
    	k=int(m-'A')+1;
    	d=0;
    	while(getchar()!='\n');
    	while(gets(input)&&sscanf(input,"%c%c",&A,&B)==2)
    	{
    		a=int(A-'A')+1;
    		b=int(B-'A')+1;
    		c=a;
        	while (x[c]>0) c=x[c];
        	d=b;
        	while (x[d]>0) d=x[d];
        	if(d!=c)x[d]=c;
    	}
    	for (int i=1; i<=k; i++){
    		if(x[i]<0) e++;
		}
		cout<<e<<endl;
		if(n) cout<<endl;
	}
}
