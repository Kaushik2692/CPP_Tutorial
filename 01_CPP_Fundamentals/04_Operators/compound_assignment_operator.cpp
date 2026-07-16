#include <iostream>

int main()
{
    /**COMPOUND ASSIGNMENT OPERATOR
     * += (x = x + y)
     * -= (x = x - y)
     * *= (x = x * y)
     * /=
     * %=
     * &= (Bitwise AND assignment)
     * |= (Bitwise OR assignment)
     * ^= (Bitwise XOR assignment)
     * <<= (Left shift assignment)
     * >>= (Right shift assignment)
     */

    int x = 5;
    x += 2;
    std::cout << x; // 7

    return 0;
}
