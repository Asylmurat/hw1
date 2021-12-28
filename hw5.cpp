#include <iostream>
using namespace std;

int main()
{
    int k = 10;
    int arr[] = { 8, 7, 10, 9, 13, 12, 11, 14, 11, 13 };
    if (arr[0] > 10) {
        arr[0] = (arr[0] -= k);
    }
    if (arr[1] > 10) {
        arr[1] = (arr[1] -= k);
    }
    if (arr[2] > 10) {
        arr[2] = (arr[2] -= k);
    }
    if (arr[3] > 10) {
        arr[3] = (arr[3] -= k);
    }
    if (arr[4] > 10) {
        arr[4] = (arr[4] -= k);
    }
    if (arr[5] > 10) {
        arr[5] = (arr[5] -= k);
    }
    if (arr[6] > 10) {
        arr[6] = (arr[6] -= k);
    }
    if (arr[7] > 10) {
        arr[7] = (arr[7] -= k);
    }
    if (arr[8] > 10) {
        arr[8] = (arr[8] -= k);
    }
    if (arr[9] > 10) {
        arr[9] = (arr[9] -= k);
    }
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
}