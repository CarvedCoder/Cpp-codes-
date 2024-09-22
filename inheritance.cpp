
#include <iostream>
using namespace std;

class vehicle
{
public:
    string brand = "BMW ";
    void print()
    {
        cout << "Hi\n";
    }
};

class car : public vehicle
{
public:
    string model = "CX9\n";
};

int main(void)
{
    car x;
    x.print();
    cout << x.brand << " " << x.model;
}