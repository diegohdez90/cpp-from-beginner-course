#include <iostream>
#include <vector>
#include <string>

using namespace std;

void print_screen();
char get_option();


void handle_print_list(vector<int> &list);
void handle_insert_number(vector<int> &list);
void add_number(vector<int> &list, int);
void get_avg_list(vector <int> &list);
void get_small_number(vector <int> &list);
void get_large_number(vector <int> &list);
void task_options(char option, bool &has_system, vector <int> &numbers);

bool has_system {true};
vector <int> numbers {};

void print_screen() {
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
}

void handle_insert_number(vector <int> &list) {
    cout << "Please provide a number: " ;
    int n;
    cin >> n;
    add_number(list, n);
    cout << n << " added" << endl;
}

void handle_print_list(vector<int> &list) {
    if (list.size() == 0) {
        cout << "[] - the list is empty" << endl;
        cout << endl;
        return;
    }
    cout << "[ ";
    for (auto n : list) {
        cout << n << " ";
    }
    cout << "]" << endl;
}

void add_number(vector<int> &list, int number) {
    list.push_back(number);
}

void get_avg_list(vector<int> &list) {
    int sum {0};

    if (list.size() == 0) {
        cout << "Unable to calculate the mean - no data" << endl;
        cout << endl;
        return;
    }
    for (size_t i {0}; i < list.size(); i++) {
        sum += list.at(i);
    }
    double avg = static_cast<float>(sum) / static_cast<float>(list.size());
    cout << "the mean of the vector is: " << avg << endl;
}

void get_small_number(vector <int> &list) {
    if (list.size() == 0) {
        cout << "Unable to determine the smallest number - list is empty" << endl;
        cout << endl;
        return;
    }
    int min {list.at(0)};
    for (size_t i {1}; i < list.size(); i++) {
        if (list.at(i) < min) {
            min = list.at(i);
        }
    }
    cout << "the min value of the vector is: " << min << endl;
}

void get_large_number(vector <int> &list) {
    if (list.size() == 0) {
        cout << "Unable to determine the largest number - list is empty" << endl;
        cout << endl;
        return;
    }
    int max {list.at(0)};
    for (size_t i {1}; i < list.size(); i++) {
        if (numbers.at(i) > max) {
            max = list.at(i);
        }
    }
    cout << "the max value of the vector is: " << max << endl;
}

char get_option() {
    char option {};
    cin >> option;
    return option;
}

void task_options(char option, bool &has_system, vector<int> &numbers) {
    switch (option){
        case 'P':
        case 'p':
            handle_print_list(numbers);
            break;
        
        case 'A':
        case 'a':
            handle_insert_number(numbers);
            break;
        
        case 'M':
        case 'm': {
            get_avg_list(numbers);
            break;
        }
        
        case 'S':
        case 's': {
            get_small_number(numbers);
            break;
        }
        
        case 'L':
        case 'l': {
            get_large_number(numbers);
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

int main() {
    while (has_system) {
        print_screen();
        char option = get_option();
        task_options(option, has_system, numbers);
    }
    return 0;
}
