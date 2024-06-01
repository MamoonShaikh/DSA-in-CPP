#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int b = 5;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "swap two num " << a << " "  << b<< endl;
}