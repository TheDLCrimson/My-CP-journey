#include <bits/stdc++.h> 
using namespace std; 

bool check(int a[], int scan, int now)
{
    
    for(int i = 1; i < scan; i++ )
        if (now == a[i]) return false;
    
    return true;
}

main(void)
{
    int n,C[7],z=1;
    string S[7],X[7],A[7];
    cin>>n;
	for (int i = 1 ; i <= n; i++)
        cin>>S[i];
    
    X[1] = "purple";
    X[2] = "green";
    X[3] = "blue";
    X[4] = "orange";
    X[5] = "red";
    X[6] = "yellow";

    
    A[1] = "Power";
    A[2] = "Time";
    A[3] = "Space";
    A[4] = "Soul";
    A[5] = "Reality";
    A[6] = "Mind";

    for (int i = 1 ; i <= n ; i++)
        for (int j = 1 ; j <= 6 ; j++)
            if ( S[i].compare(X[j]) == 0 )
            {
                C[z] = j;
                z++;
            }
    
    cout<<6-n<<endl;

    for (int i = 1 ; i <= 6 ; i++)
            if( check(C, z, i) == true )
                cout<<A[i]<<"\n";

    
    
    return 0;
}

