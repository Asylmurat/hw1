#include <iostream>
using namespace std;

int main()
{
    int arr[50];
    int i = 0;
    int j = 0;
    while (j < 50)
    {
        if (i % 2 != 0)
        {
            arr[j] = i;
            j++;
        }
        i++;
    }

    for (int i = 0; i < 50; i++)
    {
        cout << arr[i] << " ";
    }

}