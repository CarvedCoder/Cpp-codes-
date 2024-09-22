#include <iostream>

struct node
{
    int data;
    node *next;
};

typedef node *Node;

void new_node(int data, Node &head)
{
    Node temp;
    temp = new node;
    temp->data = data;
    temp->next = head;
    head = temp;
}

void insert_in_between(int data, Node &head, int val)
{
    Node pos;
    pos = head;
    while (pos)
    {
        if (pos->next->data == val)
        {
            Node temp;
            temp = new node;
            temp->data = data;
            temp->next = pos->next;
            pos->next = temp;
        }
        else
        {
            pos->next = pos;
        }
    }
}

int main(void)
{
    int val;
    Node head;
    head = new node;
    head->data = 10;
    head->next = NULL;
    new_node(20, head);
    new_node(40, head);
    //insert_in_between(15,head,20);
    Node temp;
    temp = head;
    while (temp)
    {
        std::cout << temp->data << "-> ";
        temp = temp->next;
    }
}