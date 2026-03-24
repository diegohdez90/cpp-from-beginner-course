#include <iostream>
#include <vector>

using namespace std;

int main() {

    bool has_system {true};
    vector <int> numbers {};

    while(has_system) {
        char option {};
        cout << endl;
        cout << "Choice an option:" << endl;
        cout << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << endl;
        cout << "Enter your choice: ";

        cin >> option;

        cout << endl;
        switch (option){
            case 'P':
            case 'p':
                if (numbers.size() == 0) {
                    cout << "[] - the list is empty" << endl;
                    cout << endl;
                    break;
                }
                cout << "[ ";
                for (auto n : numbers) {
                    cout << n << " ";
                }
                cout << "]" << endl;
                break;
            
            case 'A':
            case 'a':
                cout << "Please provide a number: " ;
                int n;
                cin >> n;
                numbers.push_back(n);
                cout << n << " added" << endl;
                break;
            
            case 'M':
            case 'm': {
                int sum {0};
                int numbers_length {numbers.size()};

                if (numbers_length == 0) {
                    cout << "Unable to calculate the mean - no data" << endl;
                    cout << endl;
                    break;
                }
                for (size_t i {0}; i < numbers_length; i++) {
                    sum += numbers.at(i);
                }
                float avg = static_cast<float>(sum) / static_cast<float>(numbers_length);
                cout << "the mean of the vector is: " << avg << endl;
                break;
            }
            
            case 'S':
            case 's': {
                if (numbers.size() == 0) {
                    cout << "Unable to determine the smallest number - list is empty" << endl;
                    cout << endl;
                    break;
                }
                int min {numbers.at(0)};
                for (size_t i {1}; i < numbers.size(); i++) {
                    if (numbers.at(i) < min) {
                        min = numbers.at(i);
                    }
                }
                cout << "the min value of the vector is: " << min << endl;
                break;
            }
            
            case 'L':
            case 'l': {
                if (numbers.size() == 0) {
                    cout << "Unable to determine the largest number - list is empty" << endl;
                    cout << endl;
                    break;
                }
                int max {numbers.at(0)};
                for (size_t i {1}; i < numbers.size(); i++) {
                    if (numbers.at(i) > max) {
                        max = numbers.at(i);
                    }
                }
                cout << "the max value of the vector is: " << max << endl;
                break;
            }

            case 'Q':
            case 'q':
                has_system = false;
                break;
            default:
                cout << endl << "Unknown selection, please try again" << endl;
                break;

        }
    }
    return 0;
}
