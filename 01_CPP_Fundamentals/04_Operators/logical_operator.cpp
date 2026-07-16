#include <iostream>

int main()
{
    /**LOGICAL OPERATOR
     * && (Logical AND) true && true = true ; false && true = false ; true && false = false ; false && false = flase
     * || (Logical OR) true || true = true ; false || true = true ; true || false = true ; false || false = flase
     * ! (Logical NOT) !true = false ; !false = true
     */

    bool a = true;  // 1
    bool b = false; // 0

    // All value except 0 , 0.0 , NULL , nullptr , \0 are considered as true
    std::cout << (a && b); // 0
    return 0;
}