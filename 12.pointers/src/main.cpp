#include <iostream>
using namespace std;

int main() {
    int num {10};
    cout << "Value: " << num << endl;
    cout << "Sizeof: " << sizeof num << endl;
    cout << "Address: " << &num << endl;

    int *p;
    cout << "Value: " << p << endl; // garbage value, not recommended
    cout << "Sizeof: " << sizeof p << endl;
    cout << "Address: " << &p << endl;

    p = nullptr;
    cout << "Value: " << p << endl; // now, p has a value
}