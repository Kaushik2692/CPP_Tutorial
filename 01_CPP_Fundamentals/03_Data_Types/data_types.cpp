#include <iostream>
#include <limits>
#include <cstdint>

void myFunction() // void data type is mainly used in function with no return values.
{
    std::cout << "Hello\n";
}

int main()
{
    int age{18}; // Here int is the data type

    // Fundamental data types
    bool isEmpty = true; // bool can have two value true(1) or false(0)
    char grade = 'A';
    int marks = 90;
    float average = 95.31f;
    double pi = 3.14159;
    std::nullptr_t ptr = nullptr;

    // Smaller integer data type
    short distance = 25;

    // Larger Integer data type
    long population = 5000000;
    long long stars = 9223372036854775807LL;

    // Data types indecating sign of an integer
    signed int temperature = -17;
    unsigned int score = 100;

    // long double provides even greater precision than double
    const long double PI = 3.141592653589793238L; // Can use const along with data type to make the value a constant.

    // wchat_t stores wide characters
    wchar_t letter = L'A';

    // To store UTF-8 code units
    char8_t characterOne = u8'A';

    // To store UTF-16 code units
    char16_t characterTwo = u'A';

    // To store UTF-32 code units
    char32_t characterThree = U'A';

    // Fixed width integers. To use these include <cstdint>
    std::int32_t id = 100;
    std::uint64_t filesize = 5000000000ULL;

    /**Other types
     * std::int8_t
     * std::int16_t
     * std::int32_t
     * std::int64_t
     *
     * std::uint8_t
     * std::uint16_t
     * std::uint32_t
     * std::uint64_t
     */

    // when using auto compiler automatically determines the datatype.
    auto flag = true;

    // to get minimum and maximum limits of a datatype do. To do this first include <limits>
    std::cout << std::numeric_limits<int>::max();
    std::cout << std::numeric_limits<int>::min();

    return 0;
}
