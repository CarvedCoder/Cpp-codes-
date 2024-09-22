#include <iostream>
#include <climits>
int main(void)
{
    using namespace std;
    int n, first, second;
    int arr[] = {5, 4, 7, 6, 12, 32, 2, 8, 10, 50};
    n = sizeof(arr) / sizeof(arr[0]);
    first = second = INT_MAX;
    if (n < 2)
    {
        cout << "invalid input" << endl;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] < second && arr[i] != first)
        {
            second = arr[i];
        }
    }
    cout << "the second smallest element in this array is " << second << endl;
}
