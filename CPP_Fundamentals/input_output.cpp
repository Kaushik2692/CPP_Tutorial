#include <iostream> // iostream stands for Input Output Stream.

/*
<iostream> provides:
    std::cout -> Output
    std::cin -> Input
    std::cerr -> Used to print error message
    std::clog -> Used to print logging diagnostic message
*/

int main()
{
    // std::cout
    std::cout << "Hello, World!\n"; // << is called the stream insertion operator. It inserts data into the output stream.

    // \n: New line

    // Can also use std::endl
    std::cout << "Hello, World!" << std::endl;
    // Use \n instread of std::endl because endl flushes the output buffer.

    /**Escape sequences
     * \n : Next line
     * \t : Tab
     * \b : Backspace
     * \r : Carriage Return
     * \\ : Backslash
     * \' : Single quote
     * \" : Double quote
     * \a : Alert sound
     */

    // std::cin
    int age = 0;
    std::cout << "Enter your age: ";
    std::cin >> age; // >> Called the stream extraction operator. It extracts data from the input stream.
    std::cout << "AGE = " << age << '\n';

    // Read multiple input
    int x{0};
    int y{0};
    std::cin >> x >> y; // INPUT: 10 20
    std::cout << "x = " << x << ' ' << "y = " << y << '\n';

    // Input Invalidation
    int age;
    std::cin >> age;
    if (!(std::cin >> age)) // If user inputs abc it prints the message "Invalid Input".
    {
        std::cout << "Invalid Input\n";
    }

    // std::cerr
    std::cerr << "Error\n"; // Errors are sent to the standard error stream, which is separate from normal output.

    // std::clog
    std::clog << "Program Started\n"; // Unlike std::cerr, std::clog is typically buffered, making it suitable for general logging.

    return 0;
}
