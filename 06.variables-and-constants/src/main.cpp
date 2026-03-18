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
    // cout << "The value of pi is: " << pi << endl;

    /**
     * fourth part. In this part, we are declaring a variable "middle_initial" of type char, and we are initializing it with the value 'A'.
     * We are then printing the value of "middle_initial" to the console. This part demonstrates how to declare and initialize a variable of type char, which is used to store a single character
     */
    char middle_initial {'A'};
    cout << "My middle initial is: " << middle_initial << endl;

    /**
     * fifth part. In this part, we are declaring a variable "exam_score" of type unsigned short int, and we are initializing it with the value 55.
     * We are then printing the value of "exam_score" to the console. This part demonstrates how to declare and initialize a variable of type unsigned short int, which is used to store a
     */
    unsigned short int exam_score {55};
    cout << "My exam score is: " << exam_score << endl;

    /**
     * sixth part. In this part, we are declaring a variable "countries_represented" of type int, and we are initializing it with the value 65.
     * We are then printing the value of "countries_represented" to the console. This part demonstrates how to declare and initialize a variable of type int, which is used to store whole
     */
    int countries_represented {65};
    cout << "There are " << countries_represented << " countries represented in this meeting." << endl;

    /**
     * seventh part. In this part, we are declaring a variable "people_in_arizona" of type long, and we are initializing it with the value 7000000.
     * We are then printing the value of "people_in_arizona" to the console. This part demonstrates how to declare and initialize a variable of type long, which is used to store larger
     */
    long people_in_arizona {7000000};
    cout << "There are " << people_in_arizona << " people in Arizona." << endl;

    /**
     * eighth part. In this part, we are declaring a variable "people_on_earth" of type long, and we are initializing it with the value 8'000'000'000.
     * We are then printing the value of "people_on_earth" to the console. This part demonstrates how to declare and initialize a variable of type long, which is used to store larger
     */
    long people_on_earth {8'000'000'000};
    cout << "There are " << people_on_earth << " people on Earth." << endl;

    /**
     * ninth part. In this part, we are declaring a variable "distance_to_alpha_centauri" of type long long, and we are initializing it with the value 9'461'000'000'000.
     * We are then printing the value of "distance_to_alpha_centauri" to the console. This part demonstrates how to declare and initialize a variable of type long long, which is used to
     */
    long long distance_to_alpha_centauri {9'461'000'000'000};
    cout << "The distance to Alpha Centauri is: " << distance_to_alpha_centauri << " kilometers." << endl;

    /**
     * tenth part. In this part, we are declaring a variable "car_payment" of type float, and we are initializing it with the value 401.23.
     * We are then printing the value of "car_payment" to the console. This part demonstrates how to declare and initialize a variable of type float, which is used to store decimal
     */
    float car_payment {401.23};
    cout << "My car payment is: " << car_payment << endl;

    /**
     * eleventh part. In this part, we are declaring a variable "pi_value" of type double, and we are initializing it with the value 3.14159.
     * We are then printing the value of "pi_value" to the console. This part demonstrates how to declare and initialize a variable of type double, which is used to store decimal
     * values with higher precision than float.
     */
    double pi_value {3.14159};
    cout << "The value of pi is: " << pi_value << endl;

    /**
     * twelfth part. In this part, we are declaring a variable "large_amount" of type long double, and we are initializing it with the value 2.7e120.
     * We are then printing the value of "large_amount" to the console. This part demonstrates how to declare and initialize a variable of type long double, which is used to store
     * decimal values with even higher precision than double.
     */
    long double large_amount {2.7e120};
    cout << "A large amount is: " << large_amount << endl;

    /**
     * thirteenth part. In this part, we are declaring a variable "game_over" of type bool, and we are initializing it with the value false.
     * We are then printing the value of "game_over" to the console. This part demonstrates how to declare and initialize a variable of type bool, which is used to store boolean values (
     */
    bool game_over {false};
    cout << "The value of game_over is: " << game_over << endl;

    /**
     * Overflow example. In this part, we are declaring two variables "small_number" and "large_number" of type short, and we are initializing them with the values 30000 and 1000, respectively.
     * We are then calculating the sum of "small_number" and "large_number" and storing the result in a variable called "result". Finally, we are printing the value of "result
     * This part demonstrates the concept of overflow, which occurs when we try to store a value that exceeds the maximum limit of a data type. In this case, the maximum value for a short is 32767, and when we add 30000 and 1000, we get 31000, which exceeds the maximum limit. As a result, we get an overflow, and the value of "result" will wrap around and give us an incorrect value. This is an important concept to understand when working with variables and data types in C++.
     */

    /**
     * fourteenth part. In this part, we are declaring two variables "value1" and "value2" of type short, and we are initializing them with the values 30000 and 1000, respectively.
     * We are then calculating the sum of "value1" and "value2" and storing the result in a variable called "sum". Finally, we are printing the value of "sum
     */
    short value1 {30000};
    short value2 {1000};
    short product {value1 * value2};

    cout << "The product of " << value1 << " and " << value2 << " is: " << product << endl;
    
    return 0;
}