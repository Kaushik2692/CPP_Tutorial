#include <iostream>

int main()
{
    /**ARITHMATIC OPERATOR
     * + (Addition)
     * - (Subtraction)
     * * (Multiplication)
     * / (Division)
     * % (Modulus)
     */

    int a = 10;
    int b = 5;

    std::cout << a + b;
    std::cout << a - b;
    std::cout << a * b;
    std::cout << a / b; // NOTE: int / int = int ; int / float = float ; float / int = float ; float / float = float
    std::cout << a % b;

    // Unary +
    std::cout << +a; // +a = +15

    // Unary -
    std::cout << -a; // -a = -15

    return 0;
}