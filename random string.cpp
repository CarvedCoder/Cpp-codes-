#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>
using namespace std;
int main(void)
{
    string character[] = {"Eula", "Raiden", "Luna(vampire)", "Nothing", "Nahida"};
    int x = sizeof(character)/sizeof(character[0]);
    srand(time(0));
    int y = rand()%x;
    cout << "the character that you won is " << character[y] << "\n";
}