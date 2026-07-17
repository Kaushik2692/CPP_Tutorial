#include <iostream>

int main()
{
    // ++ (Increment operator)
    int x = 10;
    std::cout << x++; // Postfix increment : First prints (x = 10) then increments (x = x + 1 = 11)
    std::cout << ++x; // Prefix increment  : Fist increments (x = 11 + 1 = 12) then prints (x = 12)

    // -- (Decrement operator)
    int y = 10;
    std::cout << y--; // Postfix decrement : First prints (y = 10) then dectrements (y = y - 1 = 9)
    std::cout << --y; // Prefix decrement  : Fist decrement (y = 9 - 1 = 8) then prints (y = 8)

    return 0;
}
