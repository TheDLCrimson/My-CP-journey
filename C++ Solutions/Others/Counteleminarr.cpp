#include<iostream>
using namespace std;
main()
{
    int a[100] = {1,1,1,2,3,3,4,5,5,5,5,6};
    int count[10] = {0};
    int i;
    for(i = 0; i< 100; i++)
        count[a[i]]++;
    for(i = 1; i< 10; i++)
    {
		if(count[i]==1) cout<<i<<"--appreances for\t"<<"one time"<<endl;
 		else if(count[i]!=0)
        cout<<i<<"--appreances for\t"<<count[i]<<" times"<<endl;
	
    }
    system("pause"); 
}