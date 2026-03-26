#include <iostream>
#include <string>

using namespace std;

int main() {
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    string message {};
    
    cout << "Enter your message: ";
    getline(cin, message);

    cout << "Encrypting message..." << endl;

    string encrypted_message {};
    for (char c: message) {
        size_t p = alphabet.find(c);
        char encrypted_char {};
        if (p != string::npos) {
            encrypted_char = key.at(p);
        } else {
            encrypted_char = c;
        }
        encrypted_message += encrypted_char;
    }

    cout << "Encrypted message: " << encrypted_message << endl;

    cout << "Decrypting message..." << endl;

    string decrypted_message {};
    for (char c: encrypted_message) {
        size_t p = key.find(c);
        char decrypted_char {};
        if (p != string::npos) {
            decrypted_char = alphabet.at(p);
        } else {
            decrypted_char = c;
        }
        decrypted_message += decrypted_char;
    }
    cout << "Decrypted message: " << decrypted_message << endl;
    return 0;
}
