#include<bits/stdc++.h>

#define ll long long;

using namespace std;

//Function type 1
void Function1 (ll x, ll y)
{
    cout << x + y << "\n";
}
//Function type 2(that can return type)
ll Function2 (ll x, ll y)
{
    return x + y;
}

//Struct
struct Character
{
    string name;
    int HP, MP;
};


int main()
{
    //FUNCTION
    Function1(6, 9);
    cout << Function2(6, 9) << "\n";


    //Array
    ll Array[5] = {69, 420, -345, 0, 1};
    for (int i = 0; i < 5; i++)
        cout << Array[i] << " ";
    cout << "\n";    
    //Vector
    vector<ll> Vector;
    Vector.push_back(69);
    Vector.push_back(420);
    Vector.push_back(-345);
    Vector.push_back(0);
    Vector.push_back(1);
    for (int i = 0; i < 5; i++)
        cout << Vector[i] << " ";
    cout << "\n"; 


    Character You;
    cout << "ENTER YOUR NAME: ";
    cin >> You.name;
    You.HP = 50;
    You.MP = 100;

    cout << You.name << "has " << You.HP << "HP and " << You.MP << "MP";  
   return 0;
}