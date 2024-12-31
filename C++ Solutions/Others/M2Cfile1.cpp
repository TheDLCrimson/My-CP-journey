#include <bits/stdc++.h>
using namespace std;
 
bool Prime(int a)
{
    if(a<2) return false;
    if(a>2)
    {
        if(a%2==0) return false;
        for(int i=3; i<=sqrt(a); i+=2)
            if(a%i==0) return false;
    }

    return true;
}

int main()
{
    int m,n,a[100][100];
    
    ifstream fi("DULIEU.txt");   
    ofstream fo("OutDL.txt");  
//---------------------------------------------- 

    fi>>m>>n;                 
    for(int i=1; i<=m; i++) 
        for(int j=1; j<=n; j++)
            fi>>a[i][j];

    for(int i=1; i<=m; i++)  
        for(int j=1; j<=n; j++)
            if(Prime(a[i][j])==true)
                fo << a[i][j] <<" ";
        
    

//-----------------------------------------------
    
    fo<<"\n";
    fo<<"\n";
    int max=a[1][1],x=1,y=1;
    for(int i=1; i<=m; i++) 
        for(int j=1; j<=n; j++)
           if (max<a[i][j]) 
           {    
            	max=a[i][j];
				x=i;
        		y=j;
           }

    fo<<x<<" "<<y;

//-----------------------------------------------

    fo<<"\n";
    fo<<"\n";
    for(int i=1; i<=m; i++) 
    {
        for(int j=1; j<n; j++)
            for(int k=j+1; k<=n; k++)  
                if(a[i][j]>a[i][k]) 
                    swap(a[i][j],a[i][k]) ;
    }                
    
    for(int i=1; i<=m; i++) 
    {
        for(int j=1; j<=n; j++)
            fo << a[i][j] <<" ";
        fo<<"\n";
    }

    fo<<"\n";

     for(int i=1; i<=m; i++) 
    {
        for(int j=n; j>=1; j--)
            fo << a[i][j] <<" ";
        fo<<"\n";
    }


    fi.close();
    fo.close();
 
    return 0;
}
