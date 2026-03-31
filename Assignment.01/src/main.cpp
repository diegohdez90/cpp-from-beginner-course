#include <iostream>
#include <string>

using namespace std;

int main() {
    string message {};

    cout << "Enter your message without space: ";
    getline(cin, message);

    for (size_t i {1}; i <= message.size(); ++i) {
        cout << string(message.size() - i, ' ');
        string left = message.substr(0, i);
        cout << left;
        string rigth = left.substr(0, left.size() - 1);
        for (int j = rigth.size() - 1; j >= 0; --j) {
            cout << rigth.at(j);
        }
        cout << endl;
    }
    
    return 0;
}
