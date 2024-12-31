#include <bits/stdc++.h>
using namespace std; 
// Code by Crimson XD 
                                                                    //Nhân ngược lmao, vi dụ 15 * 120
int Mul(int x, int *num, int size)                                  //      15
{                                                                   //  *  120 
    int pass = 0;                                                   // ---------
    for(int i = 0; i < size; i++)                                   //      00
    {                                                               //     30
        int P = num[i] * x + pass;                                  //    15
        num[i] = P % 10;                                            //----------
        pass = P/10;                                                //    1800
    }                                                               //chứa số 120 trong sẽ là 0 2 1 (ngược ấy lol)
                                                                    //  P = 0 * 15 + 0 = 0 (ghi 0 vào mảng) pass = 0
    while(pass > 0)                                                 //  P = 2 * 15 + 0 = 30 (ghi 0 vào mảng) pass = 3 
    {                                                               //  P = 1 * 15 + 3 = 18 (ghi 8 vào mảng) pass = 1
        num[size] = pass%10;                                        //  Pass vẫn còn thì nhét nốt vào
        pass /= 10;                                                 //  khi đó mảng sẽ trở thành 0 0 8 1 và size = 5 ;3
        size++; 
    } 
    return size; 
} 

void Fact(int n, int k) 
{ 
    int *num = new int[10000]; 
  
    num[0] = 1; 
    int size = 1; 
  
    for(int i = 2; i <= n; i++) 
        size = Mul(i, num, size); 
  
    for(int i = size-1; i >= size - k; i--) 
        cout << num[i]; 
} 
  
int main() 
{ 
    int n, k;
    cin>>n>>k;

    Fact(n, k); 
    return 0; 
} 
