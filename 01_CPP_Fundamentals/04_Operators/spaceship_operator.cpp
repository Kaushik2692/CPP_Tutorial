#include <iostream>
#include <compare>

int main()
{
    // SPACESHIP OPERATOR <=>
    auto result = (10 <=> 20);
    /*
    (a <=> b) Returns:
    std::strong_ordering::less if a < b
    std::strong_ordering::greater if a > b
    std::string_ordering::equal if a == b
    */

    auto isGreater = ((20 <=> 10) > 0); // return true (1)
    auto isLesser = ((10 <=> 20) < 0);  // return true (1)

    return 0;
}
