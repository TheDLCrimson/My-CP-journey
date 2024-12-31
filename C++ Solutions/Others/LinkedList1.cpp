#include <bits/stdc++.h>
using namespace std; 
// INSERT A NODE IN THE BEGINNING OF THE LIST

class Node
{
    public:
    long long data;
    Node *next;
};

	Node *head;

void Insert(long long x)
{
    Node *temp = new Node();
    temp -> data = x;
    temp -> next = head;
    head = temp;
}

void Print()
{
    Node *temp = head;

    while(temp != NULL)
    {
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
}

main(void) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    head = NULL;
    long long n, x;

    cin>>n;

    for( long long i = 1; i <= n; i++)
    {
        cin>>x;
        Insert(x); 
    }
    
    Print();

    return 0;

}


