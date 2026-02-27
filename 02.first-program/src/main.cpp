#include <iostream>

using namespace std;

int main() {
    int number;
    std::cout << "Enter a number between 1 and 100: ";
    std:cin >> number;
    if (number < 1 || number > 100) {
        std::cout << "Invalid input. Please enter a number between 1 and 100." << std::endl;
        return 1;
    }
    std::cout << "You entered: " << number << std::endl;
    return 0;
}
