#include <iostream>

int main(void)
{
    using namespace std;
    int width, space;
    cout << "what width do you want : ";
    cin >> width;
    space = width - 1;
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }

        cout << endl;
        space--;
    }
    space = 0;
    for (int i = width; i > 0; i--)
    {
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
        space++;
    }
}
