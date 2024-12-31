#include<bits/stdc++.h>
using namespace std;

int *Track = new int[32];

void Union(char E1, char E2)
{
	int a = int(E1 - 65);
	int b = int(E2 - 65);
	
	while(Track[a] >= 0) 
        a = Track[a];
    while(Track[b] >= 0) 
        b = Track[b];
    if(a != b) Track[b] = a;

}

main(void)
{
	int maxChar;
	char edge1, edge2, maxAlp;
		
	int res = 0, n;
	cin>>maxAlp;
	cin>>n;
	maxChar = maxAlp - 65 + 1;
	
	for(int i = 0; i < maxChar; i++)
		Track[i] = -1;
		
	for(int i = 1; i <= n; i++)
	{
		cin>>edge1;
		cin>>edge2;
		Union(edge1, edge2);
	/*	for(int i = 0; i < maxChar; i++)
		cout<<Track[i]<<" ";
		cout<<"\n";
	*/			
	}
		
	for(int i = 0; i < maxChar; i++)
		if(Track[i] < 0) 
			res++;
		
	cout<<res<<"\n";
	
	
	return 0;
}
