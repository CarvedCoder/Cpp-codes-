#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
class cars
{
public:
    string brand, car;
    int year;
    cars(string x, string y, int z)
    {
        brand = x;
        car = y;
        year = z;
    }
};

int main(void){
    cars car1 = {"bmw","X5",1999};
    cars car2 = {"ford","mustand",1969};
    srand(time(0));
    int i = rand()%2;
    cout << car1.brand << " " << car1.car << " " << car1.year;
}