#include <iostream>

using namespace std;


int main() {
    int *int_ptr{nullptr};
    int_ptr = new int; // allocate an integer on the heap

    // ... use the pointer as needed ...

    delete int_ptr; // frees the allocated storage

    int *array_ptr{nullptr};
    int size{};

    cout << "How big do you want the array? ";
    cin >> size;

    array_ptr = new int[size]; // allocate array on the heap

    // ... use the array as needed ...

    delete[] array_ptr; // frees the allocated array storage


    double *temp_ptr = nullptr;

    size_t size_value{0};
    cout << "How many temps? ";
    cin >> size_value;
    temp_ptr = new double[size_value];
    delete [] temp_ptr;

    return 0;
}