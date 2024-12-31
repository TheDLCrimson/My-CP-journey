#include<bits/stdc++.h> 
using namespace std; 

char *Arr;

void printRLE(string s) 
{ 
    int d=0;
    for (int i = 0; s[i] != '\0'; i++)  
    { 
        
        int count = 1; 
        while (s[i] == s[i + 1])  
        { 
            i++; 
            count++; 
        } 
        Arr[d] = s[i];
        d++;
        Arr[d] = count + 48;
        d++;
    } 
    
    for (int i = 0; i < d; i++)
    	cout<<Arr[i];
} 




int main() 
{ 
    string Necklace;
    cin>>Necklace; 
    Arr = new char[20];
    printRLE(Necklace);
    
    return 0; 
} 
