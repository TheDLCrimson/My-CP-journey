#include <bits/stdc++.h>
using namespace std; 
  

main(void) 
{ 
    int a;
    int *p;
    p = new int[20];
    delete[] p;
    p = new int;
    *p = 10;
    // delete p;
    

    cout<<p<<" "<<*p;
    
    return 0; 
} 
