#include <bits/stdc++.h>
using namespace std;

main(void)
{
    long long s, n, x[10001], y[10001];
    bool gameover = false;
    cin>>s>>n;

    for (long long i = 1; i <= n; i++)
        cin>>x[i]>>y[i];

	for (long long i = 1; i < n; i++)
		for (long long j = i+1; j <= n; j++)
			if(x[i] > x[j])
			{
				swap(x[i],x[j]);
				swap(y[i],y[j]);
			}
	
    for (long long i = 1; i <= n; i++)
    {
        if (s <= x[i])
        {
            gameover = true;
            break;
        }
        else    s += y[i];
    }

    if (gameover == false)  cout<<"YES";
    if (gameover == true)  cout<<"NO";
    return 0;

}
