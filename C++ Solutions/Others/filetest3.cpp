#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,a[100],i;
    
    ifstream fi("input.txt");   
    ofstream fo("output.txt");  
    

    
    fi >> n;                 
    for(i=0; i<n; i++) 
        fi >> a[i];

    for(i=0; i<n; i++)
        fo << a[i]+100 <<" ";
 
    fi.close();
    fo.close();
 
    return 0;
}
