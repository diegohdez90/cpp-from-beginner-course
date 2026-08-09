#include <iostream>

using namespace std;

int main() {
    int *int_ptr{nullptr};
    int_ptr = new int;        // allocate an integer on the heap
    cout << int_ptr << endl;  // outputs the address, e.g., 0x2747f28
    cout << *int_ptr << endl; // outputs garbage, e.g., 41188048
    *int_ptr = 100;
    cout << *int_ptr << endl; // outputs 100

    


    int *array_ptr{nullptr};
    int size{};

    cout << "How big do you want the array? ";
    cin >> size;

    array_ptr = new int[size]; // allocate array on the heap

    // We can access the array here


    return 0;
}