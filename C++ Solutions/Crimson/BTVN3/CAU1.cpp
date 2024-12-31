#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll GCD(ll a, ll b)
{
  if (a < b)
    swap(a, b);
  while (b != 0)
  {
    a %= b;
    swap(a, b);
  }

  return abs(a);
}

main(void)
{
  freopen("CAU1.inp","r",stdin);
  freopen("CAU1.out","w",stdout);

  ll a, b, x, y, z;
  cin >> a >> b;
  z = GCD(a, b);

  x = a / z;
  y = b / z;

  cout << x << " " << y;

  return 0;
}
