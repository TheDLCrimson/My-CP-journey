#include <bits/stdc++.h> 
using namespace std; 

main(void)
{
    int n;
    string S;
    cin>>n;

    string A = "I hate";
    string B = "I love";
    string C = " that ";
	
	S +=A ;
    for (int i = 2; i <= n; i++)
    {
        if (i % 2 != 0) S += C + A;
        if (i % 2 == 0) S += C + B;
    }
    S += " it";

    cout<<S;

	return 0;
}

