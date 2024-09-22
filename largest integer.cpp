#include <utility>
#include <iostream>
using namespace std;

int main(void){
    int x,y;
    cout << "please write the value of x" << endl;
    cin >> x;
    cout << "please write the value of y" << endl;
    cin >> y;
    if(x<y){
        swap(x,y);
    }
    cout << "the larger no. is " << x << endl;
}