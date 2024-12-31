#include <bits/stdc++.h> 
using namespace std;

int** Matrix;
int** SolveIt(int,int,int*,int*);
void Print(int,int);

main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout.tie(NULL);
	
	int i, w, n;
    cin>>w>>n;
    
	int* Weight = new int[n+1];
    int* Value = new int[n+1];
	
    for(int i = 1; i <= n; i++)
    {
        cin>>Weight[i]>>Value[i];
    }
    
	Matrix = SolveIt(n, w, Weight, Value);
	
	//Print(n, w);
	
	cout<<Matrix[n][w];
    cout<<"\n";
	
	return 0;
	
}


int** SolveIt(int n, int w, int *Wit, int *Val) 
{
	int i, j;
	
	int ** DPBottomUp = new int*[n+1];	
	for(i = 0; i <= n; i++) 
    	DPBottomUp[i] = new int[w+1];
	
	for(i = 0; i <= n; i++)
		for(j = 0; j <= w; j++)
		{
			if (i == 0 || j == 0)	
				DPBottomUp[i][j] = 0;
			else
			{
				if (j < Wit[i])	
					DPBottomUp[i][j] = DPBottomUp[i-1][j];	
				else
					DPBottomUp[i][j] = max( DPBottomUp[i-1][j], Val[i] + DPBottomUp[i-1][ j - Wit[i] ] );
			} 	

		}

	return DPBottomUp;
}

void Print(int n, int w)
{
	for(int i=0; i <= n; i++)
	{
		for(int j=0; j <= w; j++) 
			cout<<Matrix[i][j]<<"  ";
		
		cout<<"\n";
	}

}





