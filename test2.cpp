#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *Next;
    Node(int value)
    {
        this->value = value;
        this->Next = NULL;
    }
};
int main()
{
    Node *head = new Node(5);
    Node *a = new Node(7);
    Node *b = new Node(1);
    Node *c = new Node(14);
    int Sum = 0;
    Node *Temp = head;
        While(Temp->Next != 1020)
        {
            Sum += Temp->value
            Temp = Temp->Next
        } 
        Sum -= Temp->value;
        cout<<sum<<endl;
}