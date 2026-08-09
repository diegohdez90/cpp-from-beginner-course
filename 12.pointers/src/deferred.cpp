#include <iostream>

using namespace std;

int main() {
    int score (100);
    int *score_ptr {&score};

    cout << "score:" << endl;
    cout << "Value: " << score << endl;
    cout << "Size: " << sizeof score << endl;
    cout << "Address: " << &score << endl;

    cout << "score_ptr:" << endl;
    cout << "Value: " << score_ptr << endl;
    cout << "Size: " << sizeof score_ptr << endl;
    cout << "Address: " << &score_ptr << endl;

    cout << endl;

    cout << "Changing score_ptr the value" << endl;

    *score_ptr = 200; // assignment new value to pointer

    cout << "After change score_ptr value" << endl;

    cout << endl;

    cout << "score:" << endl;
    cout << "Value: " << score << endl;
    cout << "Size: " << sizeof score << endl;
    cout << "Address: " << &score << endl;

    cout << "score_ptr:" << endl;
    cout << "Value: " << score_ptr << endl;
    cout << "Size: " << sizeof score_ptr << endl;
    cout << "Address: " << &score_ptr << endl;
}