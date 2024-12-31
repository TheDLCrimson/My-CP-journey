#include <bits/stdc++.h> 
using namespace std;


int* ShiftNum;
int* MakeIt();
bool CheckIt(int);
bool RunNow(int);

main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout.tie(NULL);
	
    int Num;
	
    ShiftNum = MakeIt();
    
    for(int t = 1 ; ; t++)
    {
        cin>>Num;
        if (Num == 0) break;
		
        cout<<"Case "<<t<<": "<<ShiftNum[Num];
    }
        
	return 0;
}


bool CheckIt(int n)
{
    string to_string (int val);
	string S = to_string(n);
    bool used[10] = {false};
    int l = S.length()-1;
    int digit;
    while(l >= 0) 
    {
        digit = int(S[l] - 48);
        if(used[digit] || digit == 0)
            return false;
        
        used[digit] = true;
        
        l--;
    }

    return true;
}

bool RunNow(int n)
{
    if( !CheckIt(n) ) return false;
    string to_string (int val);
	string S = to_string(n);
	int index = 0, l = S.length(), used[10] = {false};
    int num = int(S[0] - 48);

    for(int i = 0; i < l; i++)
    {
        index = index + (num % l);
        if( index >= l )
            index -= l;
        
        if(used[num])  return false;

        used[num] = true;

        num = int (S[index] - 48);

    }

    if ( num == int(S[0] - 48) )
        return true;

    return false;
}


int* MakeIt()
{
    int* Arr = new int[9876543];
    for(int i = 9876543; i >= 10; i--)
    {
        
        if( RunNow(i) == true )   Arr[i] = i;
        else   Arr[i] = Arr[i+1];  
    }

    return Arr;

}


