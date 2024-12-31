#include <bits/stdc++.h> 
using namespace std;

#define MAX 100 

int	tile = 0, Hx, Hy;

void FindTheHole(int Floor[MAX][MAX], int n)
{
    
    for(int i = 0; i < n; i++)
        for(int j = 0; i < n; j++)
            if(Floor[i][j] != 0)
            {
                Hx = i;
                Hy = j;
                break;
            }
	
}

void PlaceIt(int Floor[MAX][MAX], int n, int x, int y, int t)
{
    tile++;
    if(t != 1) Floor[x][y] = tile;
    if(t != 2) Floor[x][y+1] = tile;
    if(t != 3) Floor[x+1][y] = tile;
    if(t != 4) Floor[x+1][y+1] = tile;
    return;
}

void CoverIt(int Floor[MAX][MAX], int n, int x, int y)
{
    //Base case to fill in XD
    if(n == 2)
    {
        tile++;
        for(int i=0; i<n; i++) 
			for(int j=0; j<n; j++)
				if(Floor[x+i][y+j] == 0)
					Floor[x+i][y+j] = tile;
    }

    FindTheHole(Floor, n);

    int m = n/2;
    
    if (Hx < x + m && Hy < y + m) PlaceIt(Floor, n, x + m, y + m, 1);
    else if (Hx < x + m && Hy >= y + m) PlaceIt(Floor, n, x + m, y + m, 2);
    else if (Hx >= x + m && Hy < y + m) PlaceIt(Floor, n, x + m, y + m, 3);
    else if (Hx >= x + m && Hy >= y + m) PlaceIt(Floor, n, x + m, y + m, 4);

    CoverIt(Floor, n/2, x, y);
    CoverIt(Floor, n/2, x + m, y);
    CoverIt(Floor, n/2, x, y + m);
    CoverIt(Floor, n/2, x + m, y + m);

}




int main(void)  
{  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    int Floor[MAX][MAX];
    cin>>n>>Hx>>Hy;

    n = pow(2, n);
	
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)     
        {   
            Floor[i][j] = 0;
            if(i == Hx && j == Hy)
                Floor[i][j] = -1;
        }
   
    for(int i = 0; i < n; i++)
    {
		for(int j = 0; j < n; j++)     
        	cout<<Floor[i]<<" ";
        
        cout<<"\n";  
	}
    
    
    return 0;  
}  
  

