#include <bits/stdc++.h>
using namespace std;

main(void)
{
    char C1[20] ;
    gets(C1);
	char *C2 = C1;
    int l = strlen(C1);
    cout<<"\n";
    
    cout<< C2;      //Main
    
    cout<<"\n";

    for (int i = 0; i < l; i++)     //Main ( *(C2+i) & C2[i] are the SAME )
        cout<< *(C2+i); // or cout<<C2[i];
    
    cout<<"\n";

    for (int i = 0; i < l; i++)     //Main (this one will change the pointer C2)
    {
    	cout<< *C2;
    	C2++;
    }

	return 0;

}
