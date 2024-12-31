#include<bits/stdc++.h>
using namespace std;


main(void)
{
    
    int n,a[10000];

    ifstream fi("input_3.txt");
    ofstream fo("output_3.txt");

//--------------------------------

    fi>>n;
    for(int i=1; i<=n; i++)
        fi>>a[i];

    int max=a[2]-a[1];
    for(int j=n; j>1; j--)
        for(int i=j-1; i>0; i--)
            if(a[j]-a[i]>max)
            	max=a[j]-a[i];
                            
    
    fo<<max;

//--------------------------------

	fi.close();
    fo.close();

    return 0;

}
