#include <bits/stdc++.h> 
using namespace std;

// CODE BY CRIMSON XD
int ** Floor;
int ** Coverit(int,int,int);  
int SolveIt(int,int,int);
int tile = 0;
void Print(int);
void DoIt(int);
void FillIt(int,int,int);
void PlaceItCentre(int,int,int,int);
void freeMemory(int);

main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout.tie(NULL);
	
	int i, n, Hr, Hc, size;
    cin>>n>>Hr>>Hc;
    
	size = pow(2, n);
	Hr--;
	Hc--;
	Floor = Coverit(size, Hr, Hc);
	
	DoIt(size);
	
    cout<<"\n";
	
	Print(size);
	freeMemory(size);	
	
	return 0;
	
}


void DoIt(int size) 
{
  	SolveIt(size,0,0);
}


int SolveIt(int n,int x,int y) 
{
	int i, j, Hr, Hc;	
	//Base case
    if(n == 2)
    {
		tile++;
		FillIt(n, x, y);	
		
        return 0;
	}

    //Search the effin hole
	//Using function needs 5 ints so I dont do that XD
	for(i = x; i < (x+n); i++) 
		for(j = y; j < (y+n); j++)
			if(Floor[i][j] != 0) 
            {
				Hr = i; 
                Hc = j;
                break;
			}
	

	int m = n/2 - 1;
	int pos = 0;
	
	if (Hr <= (x + m) && Hc <= (y + m))	pos = 1;        //def 1
    else if (Hr <= (x + m) && Hc > (y + m)) pos = 2;     //def 2
    else if (Hr > (x + m) && Hc <= (y + m)) pos = 3;     //def 3
    else if (Hr > (x + m) && Hc > (y + m)) pos = 4;    //def 4

	PlaceItCentre(n, x + m, y + m, pos);
	
    SolveIt(n/2, x, y);
	SolveIt(n/2, x, y+n/2);
	SolveIt(n/2, x+n/2, y);
	SolveIt(n/2, x+n/2, y+n/2);
	
	return 0;

}

int ** Coverit(int n, int Hr, int Hc)
{
	int ** Arr = new int*[n];	
	int i, j;
	for(i = 0;i < n; i++) 
    {
	    Arr[i] = new int[n];
   	 	for(j = 0; j < n; j++) 
        {
			if( (i == Hr) && (j == Hc) )
				Arr[i][j]=-1;
			else
	        	Arr[i][j] = 0;
	    }
	}
	
    return Arr;
}

void FillIt(int n, int x, int y)
{    
	
	if(Floor[x][y] == 0 )    Floor[x][y] = tile;
    if(Floor[x][y+1] == 0)    Floor[x][y+1] = tile;
    if(Floor[x+1][y] == 0)    Floor[x+1][y] = tile;
    if(Floor[x+1][y+1] == 0)    Floor[x+1][y+1] = tile;
	
	return;
}

void PlaceItCentre(int n, int x, int y, int t)
{
    tile++;

    if(t != 1 && Floor[x][y] == 0)	Floor[x][y] = tile;
    if(t != 2 && Floor[x][y+1] == 0) 	Floor[x][y+1] = tile;
	if(t != 3 && Floor[x+1][y] == 0)	Floor[x+1][y] = tile;	
    if(t != 4 && Floor[x+1][y+1] == 0)	Floor[x+1][y+1] = tile;
		
	return;
}

void Print(int n)
{
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++) {
			cout<<Floor[i][j]<<"  ";
		}
		cout<<"\n";
	}
}

void freeMemory(int n)
{	
	for(int i=0; i<n; i++)
		free(Floor[i]);
	
    free(Floor);
}


/* 
    1 2
    3 4

*/
