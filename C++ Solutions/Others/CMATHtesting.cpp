#include <bits/stdc++.h>
using namespace std;

main(void)
{
    long x,y;

    for(x=1;x<=100;x++)
        for(y=1;y<=100;y++)
            if(pow(x,y)==pow(y,x-y))
                cout<<x<<" "<<y<<"\n";

    return 0;

}
