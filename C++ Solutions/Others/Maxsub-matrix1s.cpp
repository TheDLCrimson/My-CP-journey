#include <bits/stdc++.h>
using namespace std;


void Setup(int **game, int n, int m)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin>>game[i][j];

}

int maxHist(int *A, int m)
{
    stack<int> Sta;
    int topval, MaxP = 0, Para = 0, i = 0;

    while(i < m)
    {
        if( Sta.empty() || A[ Sta.top() ] <= A[i] )
            Sta.push(i);
        
        else
        {
            topval = A[Sta.top()];
            Sta.pop();

            if ( Sta.empty() )
                Para = (topval * i);
            else
            {
                while(A[i] < topval && !Sta.empty())
                {
                    Para = topval * (i - Sta.top() - 1) ;
                    topval = A[Sta.top()];
                    MaxP = (MaxP, Para);
                    Sta.pop();
                }
                
            }
        }

    	i++;
	}        
    while(!Sta.empty())
    {
        Para = topval * (i - Sta.top() - 1) ;
        MaxP = (MaxP, Para);
        topval = A[Sta.top()];
        Sta.pop();
    }

    return MaxP;
}

void maxPara(int **M, int n, int m)
{
    int *Hist = new int[m];
    int res = 0;
    
	for (int j = 0; j < m; j++)
		Hist[j] = 0;
		
	for (int i = 0; i < n; i++)
    {   
        for (int j = 0; j < m; j++)
        {
            if( M[i][j] == 1 )
                Hist[j] ++;
            else Hist[j] = 0;
        	
			cout<<Hist[j]<<" ";
		}
    	cout<<"\n";
        res = max(res, maxHist(Hist, m) );
        cout<<res<<"\n";
    }

    

}


main(void)
{
    int n, m;
    cin>>n>>m;
    int ** Field = new int*[n];	
	for(int i = 0;i < n; i++) 
        Field[i] = new int[m];

    Setup(Field, n, m);
    
    maxPara(Field, n, m);

    return 0;
}













