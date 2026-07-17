#include <iostream>

int main()
{
    // Syntax:
    // condition ? value1 : value2;

    int a = 30;
    int b = 20;
    int largest = (a > b) ? a : b;

    int age = 21;
    std::cout << ((age >= 18) ? "Eligible" : "Not Eligible");

    return 0;
}