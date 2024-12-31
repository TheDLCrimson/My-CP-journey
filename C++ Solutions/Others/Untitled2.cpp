#include<bits/stdc++.h>
using namespace std;

long long fib(long long n)
{
   if (n <= 1)
      return n;
   return fib(n-1) + fib(n-2);
}
 
main (void)
{
  long long n ;
  cin>>n;
  cout<<fib(n);
}
