#include <iostream>
using namespace std;

int main()
{
    int k = 5;
    int arr[] = { 1,3,5,6,9,15,17,56,89, 99 };
    int left = 0;
    int right = 9;
    int middle;
    while (left <= right) {
        middle = (left + right) / 2;
        if (arr[middle] > k) {
            right = middle - 1;
        }
        else {
            left = middle + 1;
        }
        if (arr[middle] == k) {
            cout << middle;
        }
    }
}