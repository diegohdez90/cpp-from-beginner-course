#include <iostream>

// import pi from contants
#include "constants/main.cpp"

using namespace std;

int main() {

    /**
     * first part. In this part, we are declaring a variable "age" of type int, but we are not initializing it with any value.
     * When we try to print the value of "age" using "cout", we will get an undefined value, which is a garbage value that can be different each time we run the program. 
     * This is because the variable "age" has not been assigned a specific value, and it may contain whatever data was previously stored in that memory location. 
     * It is important to initialize variables before using them to avoid unexpected behavior in the program.
     */
    // int age;
    // cout << age << endl;


    /**
     * second part. In this part, we are declaring two variables "room_width" and "room_length" of type int, and we are initializing them with the value 0.
     * We are then asking the user to input the width and length of a room, and we are storing those values in the respective variables. Finally, we are calculating the area of the room
     * by multiplying the width and length, and we are printing the result to the console. This part demonstrates how to use variables to store user input and perform calculations based on that input.
     * It is important to note that we are using the "cin" object to read input from the user, and we are using the "cout" object to display output to the console.
     * The "cin" object is used to read data from the standard input stream, which is usually the keyboard. The ">>" operator is used to extract data from the input stream and store it in a variable.
     */
    // int room_width {0};
    // int room_length {0};

    // cout << "Enter the width of the room: ";
    // cin >> room_width;
    // cout << "Enter the length of the room: ";
    // cin >> room_length;
    // cout << "The area of the room is: " << room_width * room_length << endl;

    /**
     * third part.
     * In this part, we are using the constant "pi" that we defined in the "constants/main.cpp" file.
     */
    cout << "The value of pi is: " << pi << endl;
    return 0;
}