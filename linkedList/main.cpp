#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head;

void Insert(int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
}

void Print()
{
    Node *temp = head;
    cout << "List: ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int n, i, x;
    head = NULL;

    cout << "How many numbers? \n";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "Enter the number: \n";
        cin >> x;
        Insert(x);
        Print();
    }

    return 0;
}
