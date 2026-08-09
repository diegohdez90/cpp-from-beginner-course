#include <iostream>

using namespace std;

int main() {
    double high_temp = {100.7};
    double low_temp = {37.4};

    double *temp_ptr = {&high_temp};

    cout << "temp_ptr:" << endl;
    cout << "Value: " << *temp_ptr << endl;
    cout << "Size: " << sizeof temp_ptr << endl;
    cout << "Address: " << &temp_ptr << endl;

    cout << endl;
    cout << "Changing the deferred value" << endl;
    temp_ptr = &low_temp;
    cout << "After changing the deferred value" << endl;

    cout << "temp_ptr:" << endl;
    cout << "Value: " << *temp_ptr << endl;
    cout << "Size: " << sizeof temp_ptr << endl;
    cout << "Address: " << &temp_ptr << endl;

    string name {"Diego"};

    string *string_ptr = {&name};

    cout << "string_ptr:" << endl;
    cout << "Value: " << *string_ptr << endl;
    cout << "Size: " << sizeof string_ptr << endl;
    cout << "Address: " << &string_ptr << endl;

    cout << endl;
    cout << "Changing the pointed value" << endl;
    name = "Arturo";
    cout << "After changing the pointed value" << endl;

    cout << endl;

    cout << "string_ptr:" << endl;
    cout << "Value: " << *string_ptr << endl;
    cout << "Size: " << sizeof string_ptr << endl;
    cout << "Address: " << &string_ptr << endl;

    return 0;
}