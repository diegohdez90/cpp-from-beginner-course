#include <iostream>

using namespace std;

int main() {

    cout << "Welcome to the cleaning service!" << endl;
    cout << endl;
    cout << "Please tell me the number of rooms you would like cleaned: ";
    int number_of_rooms {0};
    cin >> number_of_rooms;
    const double price_per_room {25};
    const double sales_tax {0.06};
    const int estimate_expiry {30}; // days
    cout << "Estimation for cleaning service: " << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price per room: $" << price_per_room << endl;
    cout << "Cost: $" << number_of_rooms * price_per_room << endl;
    cout << "Tax: $" << number_of_rooms * price_per_room * sales_tax << endl;
    cout << "Total estimate: $" << number_of_rooms * price_per_room * (1 + sales_tax) << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days." << endl;
    return 0;
}
