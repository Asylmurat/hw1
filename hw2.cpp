#include <iostream>
using namespace std;

int main()
{
    int c;
    int arr[] = { 45, 1, 13, 26 };
    for (int i = 0; i < 4; i++) {
        if (arr[0] > arr[1]) {
            c = arr[0];
            arr[0] = arr[1];
            arr[1] = c;
        };
        if (arr[1] > arr[2]) {
            c = arr[1];
            arr[1] = arr[2];
            arr[2] = c;
        };
        if (arr[2] > arr[3]) {
            c = arr[2];
            arr[2] = arr[3];
            arr[3] = c;
        };
        cout << arr[i] << " ";
    }
}