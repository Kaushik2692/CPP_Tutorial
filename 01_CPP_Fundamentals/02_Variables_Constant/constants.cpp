#include <iostream>

consteval int square(int x) // consteval forces a function to be evaluated only at compile time.
{
    return x * x;
} // Unlike constexpr, a consteval function must produce its result during compilation.

int main()
{
    const double PI = 3.14159; // const keyword is used to store constant value
    // double PI = 3.14 -> Reassigning the value gives error

    constexpr int maxStudents = 60; // While using constexpr the value must be present during the compile time.

    consteval int result = square(5);

    constinit int counter = 0; // constinit ensures that a variable with static or thread storage duration is initialized during static initialization, before the program begins executing.
    counter++;                 // Unlike constexpr, the variable does not have to be immutable.
    return 0;
}