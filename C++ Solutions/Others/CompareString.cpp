#include <iostream>

using namespace std;

int main ()
{
    string alpha, beta;
    cin >> alpha >> beta;

    if (alpha == beta) 
        cout << "alpha and beta are equal\n";
    if (alpha != beta) 
        cout << "alpha and beta are not equal\n";
    if (alpha < beta) 
        cout << "alpha is less than beta\n";
    if (alpha > beta) 
        cout << "alpha is greater than beta\n";
    
    return 0;
}