#include <iostream>
using namespace std;

namespace add
{
    void calculate(int x, int y)
    {
        cout << "the sum of the numbers is " << x + y << endl;
    }
}

namespace subtract
{
    void calculate(int x, int y)
    {
        if (x > y)
        {
            cout << "the diffrence of the numbers is " << x - y << endl;
        }
        else
        {
            cout << "the diffrence of the number is " << y - x << endl;
        }
    }
}

namespace multiply
{
    void calculate(int x, int y)
    {
        cout << "the product of the numbers is " << x * y << endl;
    }
}

namespace divide
{
    void calculate(int x, int y)
    {
        cout << "the divison of the numbers is " << x / y << endl;
    }
}

void print()
{
    cout << "feature not found" << endl;
}

int main(void)
{
    char answer;
    int x, y;
    cout << "please enter value of x" << endl;
    cin >> x;
    cout << "please enter value of y" << endl;
    cin >> y;
    cout << "which feature of the calculator do you want to use (such as A for addition)" << endl;
    cin >> answer;
    switch (answer)
    {

    case 'A':
        add::calculate(x, y);
        break;

    case 'S':
        subtract::calculate(x, y);
        break;

    case 'M':
        multiply::calculate(x, y);
        break;

    case 'D':
        divide::calculate(x, y);
        break;

    default:
        ::print();
        break;
    }
}