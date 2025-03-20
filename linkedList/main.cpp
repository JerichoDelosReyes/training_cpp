#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

void Insert(int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
}

void Print()
{
    for (Node *temp = head; temp != NULL; temp = temp->next)
    {
        cout << temp->data << " ";
    }
    cout << endl;
}

int main()
{
    int n, x;
    cout << "How many numbers? \n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number: \n";
        cin >> x;
        Insert(x);
        Print();
    }
    return 0;
}
