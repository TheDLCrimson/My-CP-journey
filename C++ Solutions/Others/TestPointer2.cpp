#include<iostream> 
using namespace std; 
  
l
void INC(int *p)
{
    (*p)++;
}

main(void) 
{ 
    int a = 1;
    INC(&a);

    cout<<a;
    
    return 0; 
} 
