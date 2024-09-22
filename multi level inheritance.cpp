#include <iostream>
using namespace std;
class father
{
public:
    string first1, last1;
    void func()
    {
        cout << "what is your first name \n";
        cin >> first1;
        cout << "what is your last name \n";
        cin >> last1;
        cout << "My name is " << first1 << " " << first2 \n;
    }
};

class child : public father
{
public:
    string first2, last2;
    void func2()
    {
        cout << "what is your first name \n";
        cin >> first2;
        cout << "what is your last name \n";
        cin >> last2;
        cout << "i am the child\n";
    }
};

class grandchild : public child
{
public:
    string first3, last3;
    void func3()
    {
        cout << "what is your first name \n";
        cin >> first3;
        cout << "what is your last name \n";
        cin >> last3;
        cout << "i am the grandchild\n";
    }
};

int main(void)
{
    grandchild x;
    x.func();
    x.func2();
    x.func3();
}