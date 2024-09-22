#include <iostream>

struct Node
{
    Node *next;
    int value;
};

typedef Node *node;

void insert(node &first, int value)
{
    node Temp;
    Temp = new Node;
    Temp->value = value;
    Temp->next = first;
    first = Temp;
}

int main(void)
{
    using namespace std;
    char answer;
    int data, run, i = 0;

    node first;
    first = new Node;
    first->value = 10;
    first->next = NULL;

    cout << "do you want to add a node?(Y/N)"<< endl;
    cin >> answer;

    if ((answer == 'Y') || (answer == 'y'))
    {
        cout << "how many nodes do you want to add?" << endl;
        cin >> run;
        while (i != run)
        {
            cout << "value of data : ";
            cin >> data;
            insert(first, data);
            i++;
        }
    }

    node Temp;
    Temp = first;
    while (Temp != NULL)
    {
        cout << "node value : " << Temp->value << endl;
        Temp = Temp->next;
    }
}