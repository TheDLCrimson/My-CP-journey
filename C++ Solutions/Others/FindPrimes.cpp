#include <bits/stdc++.h> 
using namespace std;

// CODEBY CRIMSON XD

int * Arr;
int * SetUp(int);
void PrintPrimes(int);

main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout.tie(NULL);
	
    int n;
    cin>>n;
    Arr = new int[n];
	
	for(int i = 0; i < n; i++) 
        cin>>Arr[i];
            
    PrintPrimes(n);

    return 0;
	
	
}


void PrintPrimes(int n) 
{ 
    int max = *max_element(Arr, Arr + n);
    int *Prime;
    Prime = new int[max+1];
	for(int i = 2; i < max+1; i++)
		Prime[i] = 1;
	int m = sqrt(max);
    for(int i = 2; i <= m; i++)
        for(int j = i * 2; j <= max; j += i)
            Prime[j] = 0;
	
   	
    for(int i = 0; i < n; i++) 
        if( Prime[ Arr[i] ] == 1)   
            cout<<Arr[i]<<" ";
} 
