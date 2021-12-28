#include <iostream>
using namespace std;

int main()
{
    int a = 1, b = 2, c;
    c = a;
    a = b;
    b = c;
    cout << "a = " << a << " "<< "b = " << b;
}