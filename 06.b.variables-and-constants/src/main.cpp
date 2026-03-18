#include <iostream>

using namespace std;

int main() {

    cout << "Welcome to cleaning service for small and large rooms!" << endl;
    cout << "Please tell me the number of small rooms you would like cleaned: ";
    int number_of_small_rooms {0};
    cin >> number_of_small_rooms;
    cout << "Please tell me the number of large rooms you would like cleaned: ";
    int number_of_large_rooms {0};
    cin >> number_of_large_rooms;
    const double price_per_small_room {25};
    const double price_per_large_room {35};
    const double sales_tax {0.06};
    const int estimate_expiry {30}; // days
    cout << "Estimation for cleaning service: " << endl;
    cout << "Number of small rooms: " << number_of_small_rooms << endl;
    cout << "Number of large rooms: " << number_of_large_rooms << endl;
    cout << "Price per small room: $" << price_per_small_room << endl;
    cout << "Price per large room: $" << price_per_large_room << endl;
    cout << "Cost: $" << number_of_small_rooms * price_per_small_room + number_of_large_rooms * price_per_large_room << endl;
    cout << "Tax: $" << (number_of_small_rooms * price_per_small_room + number_of_large_rooms * price_per_large_room) * sales_tax << endl;
    cout << "Total estimate: $" << (number_of_small_rooms * price_per_small_room + number_of_large_rooms * price_per_large_room) * (1 + sales_tax) << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days." << endl;
    return 0;
}
