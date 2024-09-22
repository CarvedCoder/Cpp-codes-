#include <iostream>
using namespace std;
class car
{
public:
    int speed(int maxspeed);
};
int car::speed(int maxspeed)
{
    return maxspeed;
}
int main(void){
    car myspeed;
    int x;
    cout << "what was your maximum speed \n";
    cin >> x;
    cout << myspeed.speed(x);
}
