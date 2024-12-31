#include<bits/stdc++.h>

using namespace std;

main(void)
{
    int arrNum[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    char arrChar[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int m, s;
    cin >> m >> s;
   
    if ((m * 9 - s) < 0 || (s == 0 && m > 1))
    {
        cout << "-1 -1";
        return 0;
    }
    
    string X = "";
    int big = s, i = 9;

    while (X.size() < m && big >= 0)
    {
        if (big >= arrNum[i])
        {
            big -= arrNum[i];
            X = X + arrChar[i];
        }
        else
        {
            i--;
        }
    }
    
    string Y = X;
    reverse(Y.begin(), Y.end());
    
    if (Y[0] == '0' && m > 1)
        for (int i = 0; i < m; i++)
        {
            if (i == 0)
                Y[0] = '1';
            else if (Y[i] != '0')
            {
                Y[i] = char(Y[i] - 1);
                break;
            }
        }
        
    
    cout << Y << " " << X;

    return 0;
}