#include <iostream>

struct node
{
    int data;
    node *next;
};

typedef node *Node;

void insert(Node &head, int data)
{
    Node temp;
    temp = new node;
    temp->data = data;
    temp->next = head;
    head =temp;
}

int main(void)
{
    using namespace std;
    int i=0, data, j=0;
    char ans;
    Node head;
    head = new node;
    cout<< "value of head : ";
    cin >> data;
    head-> data = data;
    head->next = NULL;
    cout << "how many nodes do you want to add" << endl;
    cin >> j;
    while(i!=j)
    {
        cout << "value of data : ";
        cin >> data;
        insert(head, data);
        i++;
    }
    Node temp;
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}