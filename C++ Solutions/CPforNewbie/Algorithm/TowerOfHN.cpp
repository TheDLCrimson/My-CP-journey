#include<bits/stdc++.h> 
using namespace std; 

void Print(int n, char start, char end)
{
    cout<<"Move disk "<<n<<" form: "<<start<<"----->"<<end<<"\n";
}

void Tower(int n , char start, char mid, char end )
{    
    if (n == 1)
    {
        Print(n, start, end);
        return;
    }
    
        Tower(n-1, start, end, mid);
        
        Print(n, start, end);
        
        Tower(n-1, mid, start, end);
        
}

main(void)
{
    int n;
    cout<<"Enter the number of disk(s): ";
	cin>>n;
    
    Tower(n, 'A', 'B', 'C');

    return 0;
}

