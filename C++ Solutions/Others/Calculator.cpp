#include <bits/stdc++.h>
using namespace std; 

long Calculate(long,long,char);
long Solve(string);
long OpValue(char);
long GetVariable(char);
bool isOperator(char);
bool HigherOrder(char,char);
bool isUnknown(char);
string Encript(string);

bool Used[123] = {false};
long *Val = new long[123];

main(void) 
{ 
    
    
    string S, Equation;
    getline(cin,S);
    Equation = Encript(S);
    cout<<"Answer: "<<Solve(Equation);

    return 0;
    
}

long Calculate(long op1, long op2, char X)
{
    long ans;
    switch(X)
    {
        case '+':
            ans = op1 + op2;
            break;
                
        case '-':
            ans = op1 - op2;
            break;

        case '*':
            ans = op1 * op2;
            break;

        case '/':
            ans = op1 / op2;
            break;
        
        case '^':
            ans = pow(op1, op2);
            break;
    }

    return ans;
}

long GetVariable(char X)
{
    if( !Used[ long(X) ] )
    {
        long a;
        cout<<"Enter the value of "<<X<<" = ";
		cin>>a;
        Val[ long(X) ] = a;
        Used[X] = true;
        
        return a;
    }    
    
    return Val[ long(X) ];
}

long Solve(string S)
{
    stack<long> Sta;

    for (long i = 0; i < S.length(); i++) 
    {
        if( isOperator(S[i]) )
        {
			long op2 = Sta.top();
            Sta.pop();
            long op1 = Sta.top();
            Sta.pop();
            long res = Calculate(op1, op2, S[i]);   
            Sta.push(res); 
    	}
        else if( isUnknown(S[i]) )
        {
            Sta.push( GetVariable(S[i]) );
        }
        else	
        {
            Sta.push( long(S[i] - 48) );  
        }
    
    }

    return long( Sta.top() );
}

bool isUnknown(char X)
{
    if ( long(X) >= 65 && long(X) <= 90 )
        return true;
    if ( long(X) >= 97 && long(X) <= 122 )   
        return true;

    return false;
}

bool isOperator(char X)
{
    if( X == '+' || X == '-' || X == '*' || X ==  '/' || X == '^')
        return true;

    return false;
}

long OpValue(char Op)
{
    long order;
    switch(Op)
    {
        case '+':
        case '-':
            order = 3;
            break;

        case '*':
        case '/':
            order = 2;
            break;
        
        case '^':
            order = 1;
            break;
    }
    return order;
}

bool HigherOrder(char op1, char op2)
{
    long val1 = OpValue(op1);
    long val2 = OpValue(op2);

    if(val1 == 1 && val2 == 1)
        return false;    
    
    if (val1 <= val2)
        return true;

    return false;

}

string Encript(string S)
{
    stack<char> Sta;
    string Pfix;
    
    for (long i = 0; i < S.length(); i++) 
    {
        
        if(S[i] == '(')
            Sta.push(S[i]);

        if(S[i] == ')')
        {
            while( Sta.top() != '(' )
            {
                Pfix += Sta.top();
                Sta.pop();
            }
            Sta.pop();
        }
        
        if ( long(S[i]) != 32 && S[i] != '(' && S[i] != ')' )
        if( !isOperator(S[i]) )
            Pfix += S[i];
        else if( isOperator(S[i])  )
        {
            while( !Sta.empty() && Sta.top()!='(' && HigherOrder( Sta.top(), S[i] )     )
            {
                Pfix += Sta.top();
                Sta.pop();
            }

            Sta.push(S[i]);
        }
    
    }

    while( !Sta.empty() )
    {
        Pfix += Sta.top();
        Sta.pop();
    }

    return Pfix;
}
