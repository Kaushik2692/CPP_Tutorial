#include <iostream>
#include <string> // <string> provides the std::string class.
#include <limits>

int main()
{
    std::string fullName{}; // Defining the variable with name 'fullName' and data type 'string'
    std::cin >> fullName;   // Now, if entered name if "Elon", the output is "Elon". But if the input is "Elon Musk", the output is also "Elon"
    std::cout << "NAME = " << fullName << '\n';

    /**C++ reads until the first whitespace.
     * Whitespace means
     * Space ' '
     * tab '\t'
     * newline '\n'
     */

    // A better way to input string is by using std::getline()
    std::getline(std::cin, fullName); // It keeps reading until it reaches \n or one other words Enter is pressed.

    // PROBLEM With std::getline()
    int age{};
    std::string name{};

    std::cout << "Age: ";
    std::cin >> age;

    std::cout << "Name: ";
    std::getline(std::cin, name);

    std::cout << "Age = " << age << '\n';
    std::cout << "Name = " << name << '\n';

    /*OUTPUT:
    Age: 18
    Name:
    */

    // When you enter age i.e. 18 and press enter the buffer contains \n. std::getline() immediately sees \n so it returns empty string.

    // SOLUTION using std::cin.ignore()
    int age{};
    std::string name{};

    std::cout << "Age: ";
    std::cin >> age;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Remove the leftover newline from the input buffer

    std::cout << "Name: ";
    std::getline(std::cin, name);

    std::cout << "Age = " << age << '\n';
    std::cout << "Name = " << name << '\n';

    // std::numeric_limits<std::streamsize>::max() tells ignore() to discard as many characters as needed.
    // '\n' tells it to stop discarding once it reaches the newline.
    // This safely clears the rest of the current input line, even if the user typed extra characters.
    return 0;
}