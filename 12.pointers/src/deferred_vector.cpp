#include <iostream>
#include <vector>

using namespace std;


int main() {
    vector<string> names{"Diego", "Arturo", "Adrian"};
    vector<string> *vector_ptr {nullptr};

    vector_ptr = &names;

    cout << "first: " << (*vector_ptr).at(0) << endl;

    cout << "names:" << endl;
    for (auto name: *vector_ptr) {
        cout << name << endl;
    }
    cout << "end of names" << endl;

}