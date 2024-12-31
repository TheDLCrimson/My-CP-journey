#include<iostream> 
using namespace std; 
  

int main() 
{ 
    int x = 5;
    int *p = &x;
    int **q = &p;
    int ***r = &q;

    cout<<x<<" [x] VALUE\n"
	<<p<<" [p] &x\n"
	<<*p<<" [*p] VALUE\n"
	<<q<<" [q] &p\n"
	<<*q<<" [*q] &x\n"
	<<*(*q)<<" [*(*q)] VALUE\n"
	<<r<<" [r] &q\n"
	<<*r<<" [*r] &p\n"
	<<*(*r)<<" [*(*r)] &x\n"
	<<***r<<" [***r] VALUE\n\n";
	
	cout<< ***r + **q + *p + x <<"\n"
	<< x + x + x + x;
    
    return 0; 
} 
