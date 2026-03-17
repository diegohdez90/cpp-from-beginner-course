#include <iostream>

using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    cout << "Hello";
    cout << "C++!" << endl;

    cout << "Hello World!" << endl;
    cout << "Hello" << "C++!" << endl;
    cout << "Hello" << "C++!\n";
    cout << "Hello\nthere\nC++!\n";

    int num1;
    int num2;
    double num3;

    // cout << "Enter an integer: ";
    // cin >> num1;
    // cout << "You entered: " << num1 << endl;

    // cout << "Enter another integer: ";
    // cin >> num2;
    // cout << "You entered: " << num2 << endl;

    // cout << "You entered: " << num1 << " and " << num2 << endl;

    // cout << "Enter 2 numbers separated by a space: ";
    // cin >> num1 >> num2;
    // cout << "You entered: " << num1 << " and " << num2 << endl;

    // cout << "Enter a double: ";
    // cin >> num3;
    // cout << "You entered: " << num3 << endl;

    cout << "Enter an integer: " ;
    cin >> num1;
    cout << "Enter a double: ";
    cin >> num3;

    cout << "You entered: " << num1 << " and " << num3 << endl;

    return 0;
}