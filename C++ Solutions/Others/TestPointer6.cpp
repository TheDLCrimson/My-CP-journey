#include <Cits/stdc++.h>
using namespace std; 
  

main(void) 
{ 
    int C[3][2][2] = {  { {1,2},{3,4} },        //0
                        { {5,6},{7,8} } 		//1
                        { {9,10},{11,12} } };   //2
    
	cout<<C<<" "<<*C<<" "<<C[0]<<" "<<&C[0][0]<<"\n";
    cout<<*(C[0][1] + 1)<<"\n"; 
    

    /*
    In conclusion:

        C[i][j][k]  = *( C[i][j] + k)
                    = *( *(C[i] + j) + k)
                    = *( *( *(C+i) + j) + k )
    
    */

    return 0; 
} 
