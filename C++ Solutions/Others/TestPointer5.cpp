#include <bits/stdc++.h>
using namespace std; 
  

main(void) 
{ 
    int B[2][3] = { 1, 2, 3, 		// 00 01 02
                    4, 5, 6 } ;		// 10 11 12

    int (*P)[3] = B;
    
	cout<<B<<" "<<&B[0]<<"\n";
    cout<<*B<<" "<<B[0]<<" "<<&B[0][0]<<"\n";
    cout<<B+1<<" "<<&B[1]<<"\n";
    cout<<*(B+1)<<" "<<B[1]<<" "<<&B[1][0]<<"\n";
    cout<<*(B+1) + 2<<" "<<B[1]+2<<" "<<&B[1][2]<<"\n";
    cout<<*( *B + 1 )<<" "<<B[0][1]<<"\n";
    cout<<*( *(B+1) + 2)<<" "<<B[1][2]<<"\n";

    /*
    In conclusion:

        B[i][j] = *( B[i] + j)
                = *( *(B+i) + j)
    
    */

    return 0; 
} 
