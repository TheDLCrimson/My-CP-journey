#include <bits/stdc++.h>
using namespace std;

bool Prsp(int a)
{
    if((a<=50) || (a>=200)) return false;
    else
    {
        if(a%2==0) return false;
        for(int i=3; i<=sqrt(a); i+=2)
            if(a%i==0) return false;
    }

    return true;
}

bool Root(int a)
{
    int i=round(sqrt(a));
    if(i*i!=a) return false;
    return true;
}


int main()
{
    int m,n,s[1000],p[1000],x,y=1,r=1;
    srand(time(0));
    ofstream fo("BANG.txt");  
//---------------------------------------------- 
	
    cin>>m>>n;                 
   
    for (int i=1; i<=m; i++) 
    {
        for (int j=1; j<=n; j++) 
        {   
            x = (21 + (rand() % 299));
            fo<<x<<" ";
            
            if(Root(x)==true)
            {
                s[r]=x;
                r++;
            }

            if(Prsp(x)==true)
            {
                p[y]=x;
                y++;
            }
        }        

        fo<<"\n";
    }

    fo<<"\n";

    for(int i=1; i<r; i++)
        fo<<s[i]<<" ";

    fo<<"\n"<<"\n";

    for(int i=1; i<y; i++)
        fo<<p[i]<<" ";

   
    
//-----------------------------------------------
    
   
    fo.close();
 
    return 0;
}
