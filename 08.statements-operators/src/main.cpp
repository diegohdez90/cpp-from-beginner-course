#include <iostream>

using namespace std;

int main() {
    cout << "Enter the numbers of cents you have: ";
    int cents {0};
    cin >> cents;

    int dollars = cents / 100;
    cents = cents % 100;
    int quarters = cents / 25;
    cents = cents % 25;
    int dimes = cents / 10;
    cents = cents % 10;
    int nickels = cents / 5;
    cents = cents % 5;
    int pennies = cents;

    cout << "You can provide the change as follows:" << endl;
    cout << "Dollars: " << dollars << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl;

    return 0;
}
