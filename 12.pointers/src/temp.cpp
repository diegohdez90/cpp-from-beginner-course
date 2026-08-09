#include <iostream>

using namespace std;

int main() {
    double high_temp {100.7};
    double low_temp {37.2};

    double *temp_ptr;

    temp_ptr = &high_temp;
    cout << "Value: " << temp_ptr << endl;
    cout << "Sizeof: " << sizeof temp_ptr << endl;
    cout << "Address: " << &temp_ptr << endl;

    temp_ptr = &low_temp;
    cout << "Value: " << temp_ptr << endl;
    cout << "Sizeof: " << sizeof temp_ptr << endl;
    cout << "Address: " << &temp_ptr << endl;

    temp_ptr = nullptr;
    cout << "Value: " << temp_ptr << endl;
    cout << "Sizeof: " << sizeof temp_ptr << endl;
    cout << "Address: " << &temp_ptr << endl;
}
