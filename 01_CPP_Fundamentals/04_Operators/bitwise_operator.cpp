#include <iostream>

int main()
{
    /**BITWISE OPERETOR
     * & (Bitwise AND)
     * | (Bitwise OR)
     * ^ (Bitwise XOR)
     * ~ (Bitwise NOT)
     * << (Leftshift)
     * >> (Rightshift)
     */

    std::cout << (5 & 3); // 5(10) = 0101(2) & 3(10) = 0011(2) OUTPUT: 1
    /*Bitwise AND
    0101 = 5
    0011 = 3
    ----
    0001 = 1
    ----
    0 & 0 = 0
    1 & 0 = 0
    0 & 1 = 0
    1 & 1 = 1
    */

    std::cout << (5 | 3); // 5(10) = 0101(2) | 3(10) = 0111(2) OUTPUT: 7
    /*Bitwise OR
    0101 = 5
    0011 = 3
    ----
    0111 = 7
    ----

    0 | 0 = 0
    1 | 0 = 1
    0 | 1 = 1
    1 | 1 = 1
    */

    std::cout << (5 ^ 3); // 5(10) = 0101(2) | 3(10) = 0111(2) OUTPUT: 6
    /*Bitwise XOR
    0101 = 5
    0011 = 3
    ----
    0110 = 6
    ----

    0 ^ 0 = 0
    1 ^ 0 = 1
    0 ^ 1 = 1
    1 ^ 1 = 0
    */

    std::cout << (~5); // 5(10) = 0101(2) OUTPUT: -6
    /*Bitwise OR
    ~00000000 00000000 00000000 00000101 = 5
    ----
     11111111 11111111 11111111 11111010 = -6
    ----

    ~1 = 0
    ~0 = 1
    */

    std::cout << (5 << 3); // 5(10) = 0101(2) OUTPUT: 40
    /*Left Shift
    0101 = 5
    << 3 (Shift left by 3 place)
    0101000 = 40
    */

    std::cout << (5 >> 2);
    /*Right Shift
    0101 = 5
    >> 2 (Shift right by 3 place)
    01 = 1
    */

    // APLICATIONS of &

    // 1. Masking (Extracting specific bits)
    // You can isolate certain bits by AND - ing with a mask.
    int x = 29;            // 11101
    int mask = 0xF;        // 01111
    int result = x & mask; // 1101 = 13

    // 2. Check if number is odd
    int num = 5;
    if (num & 1)
    {
        std::cout << "ODD\n";
    }
    else
    {
        std::cout << "EVEN\n";
    }

    // 3. Check if power of 2
    int value = 32;
    if (value & (value - 1) == 0)
    {
        std::cout << "Power of two.\n";
    }
    else
    {
        std::cout << "Not a power of two.\n";
    }

    // APPLICATION of |
    // 1. Combining Masks
    // Merge multiple masks into one.
    int mask1 = 0x0F;             // 00001111
    int mask2 = 0xF0;             // 11110000
    int combined = mask1 | mask2; // 11111111

    // 2. Configuration Registers
    // In embedded systems, OR is used to enable hardware features.
    int reg = 0;
    reg |= (1 << 2); // Bit 2 is ON, all other bits remain unchanged.
    // This is how microcontrollers toggle LEDs, sensors, or communication modules.

    // APPLICATION of ^
    // 1. Toggling Bits
    // You can flip specific bits without affecting others.
    int x = 0b1010;
    x ^= 0b0010; // flips bit 1 → result = 1000

    // 2. Swapping Two Variables(No Temp Variable)
    int a = 5, b = 9;
    a ^= b; // a = 12
    b ^= a; // b = 5
    a ^= b; // a = 9

    // APPLICATION of ~
    // 1. Creating Inverse Masks
    // Often used with AND(&) to disable specific bits.
    int reg = 0b1111; // all features ON
    reg &= ~(1 << 2); // turn OFF bit 2
    // result = 1011

    // 2. Efficient Range Clearing
    int x = 0b101011;
    x &= ~0b001111; // clears lower 4 bits → 100000

    // 3.Math trick
    // ~x = -(x + 1)

    // APPLICATION of <<
    // 1. Fast Multiplication
    // x << n = x * (2 ^ n)
    int val = 7;
    int doubled = val << 1;       // 14
    int multipliedBy8 = val << 3; // 56
    // Faster than using *in some low - level contexts.

    // APPLICATION of >>
    // 1. Fast Division
    // x >> n = x / (2 ^ n)
    int number = 7;
    int halved = val >> 1; // 3

    return 0;
}