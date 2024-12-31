#include <bits/stdc++.h>
using namespace std;

bool Prime(int n)
{
    if(n<2) return false;
    if(n>2)
	{
		if(n%2==0) return false;
		
        for(int i = 3; i<=sqrt(n); i+=2)
    		if(n%i==0) 
                return false;
   	} 
   
   	return true;
}

void Qsort(int *A,int l, int r)
{
    int mid = A[(l + r) / 2];
    int i = l;
    int j = r;

    do
    {
        while(A[i] < mid) i++;
        while(A[j] > mid) j--;

        if(i <= j)
        {
            swap(A[i], A[j]);
            i++;
            j--;
        }

    }
    while(i<=j);

    if(j > l) Qsort(A, l, j);
    if(i < r) Qsort(A, i, r);
    
}

int main()
{
    //freopen("NT.inp","r",stdin);
	//freopen("NT.out","w",stdout);

    int n, x = 0;
    cin>>n;
	
    int *A = new int[n];
    int *P = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin>>A[i];

        if( Prime(A[i]) )
        {
            P[x] = A[i];
            x++;
        }
    }
    
    Qsort(P, 0, x);
	
	cout<<x<<"\n";
    for (int i = 0; i < x; i++)
        cout<<P[i]<<" ";
    
	
    return 0;
}
