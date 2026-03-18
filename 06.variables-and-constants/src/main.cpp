#include <iostream>
// climits header file is used to define the characteristics of fundamental data types, such as their minimum and maximum values, and the number of bits used to represent them. It provides a set of constants that can be used to determine the limits of various data types in C++. For example, it defines constants like INT_MAX and INT_MIN for the maximum and minimum values of an int, and SHRT_MAX and SHRT_MIN for the maximum and minimum values of a short. By including the <climits> header file, we can access these constants and use them in our programs to ensure that we are working within the limits of the data types we are using.
#include <climits>
// cfloat header file is used to define the characteristics of floating-point data types, such as their minimum and maximum values, and the number of digits of precision they can represent. It provides a set of constants that can be used to determine the limits of various floating-point data types in C++. For example, it defines constants like FLT_MAX and FLT_MIN for the maximum and minimum values of a float, and DBL_MAX and DBL_MIN for the maximum and minimum values of a double. By including the <cfloat> header file, we can access these constants and use them in our programs to ensure that we are working within the limits of the floating-point data types we are using.
#include <cfloat>

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
    
    cout << "Documentation of sizeof operator: " << endl;
    cout << "The sizeof operator in C++ is used to determine the size, in bytes, of a data type or a variable. It can be used to find out how much memory a particular data type or variable occupies. The syntax for using the sizeof operator is as follows: sizeof(type) or sizeof(variable). When used with a data type, it returns the size of that data type in bytes. When used with a variable, it returns the size of the variable's data type in bytes. The sizeof operator is evaluated at compile time, which means that it does not incur any runtime overhead. It is commonly used in situations where we need to allocate memory dynamically or when we want to determine the size of an array or a structure. For example, if we want to allocate memory for an array of integers, we can use the sizeof operator to calculate the total size of the array by multiplying the size of an integer by the number of elements in the array. Overall, the sizeof operator is a useful tool in C++ for determining the size of data types and variables, and it can help us write more efficient and memory-conscious code" << endl;
    cout << "The size of short is: " << sizeof(short) << " bytes." << endl;
    cout << "The size of int is: " << sizeof(int) << " bytes." << endl;
    cout << "The size of long is: " << sizeof(long) << " bytes." << endl;
    cout << "The size of long long is: " << sizeof(long long) << " bytes." << endl;
    cout << "The size of float is: " << sizeof(float) << " bytes." << endl;
    cout << "The size of double is: " << sizeof(double) << " bytes." << endl;
    cout << "The size of long double is: " << sizeof(long double) << " bytes." << endl;
    cout << "The size of bool is: " << sizeof(bool) << " bytes." << endl;

    /**
     * use of climits header file. In this part, we are using the constants defined in the <climits> header file to determine the limits of various data types in C++. We are printing the maximum and minimum values for int, short, long, long long, float, double, long double, and bool. This part demonstrates how to use the constants defined in the <climits> header file to ensure that we are working within the limits of the data types we are using in our programs.
     * For example, we can see that the maximum value for an int is 2147483647, and the minimum value is -2147483648. This means that if we try to store a value that exceeds these limits in an int variable, we will get an overflow or underflow, which can lead to unexpected behavior in our program. By using the constants defined in the <climits> header file, we can avoid such issues and write more robust and reliable code.
     * Overall, the <climits> header file is an important tool for C++ programmers to ensure that they are working within the limits of the data types they are using, and it can help them write more efficient and error-free code.
     */
    
     cout << "Climits header file constants: " << endl;
     cout << "The maximum value for int is: " << INT_MAX << endl;
     cout << "The minimum value for int is: " << INT_MIN << endl;
     cout << "The maximum value for short is: " << SHRT_MAX << endl;
     cout << "The minimum value for short is: " << SHRT_MIN << endl;
     cout << "The maximum value for long is: " << LONG_MAX << endl;
     cout << "The minimum value for long is: " << LONG_MIN << endl;
     cout << "The maximum value for long long is: " << LLONG_MAX << endl;
     cout << "The minimum value for long long is: " << LLONG_MIN << endl;
     cout << "The maximum value for float is: " << FLT_MAX << endl;
     cout << "The minimum value for float is: " << FLT_MIN << endl;
     cout << "The maximum value for double is: " << DBL_MAX << endl;
     cout << "The minimum value for double is: " << DBL_MIN << endl;
     cout << "The maximum value for long double is: " << LDBL_MAX << endl;
     cout << "The minimum value for long double is: " << LDBL_MIN << endl;
     cout << "The maximum value for bool is: " << true << endl;
     cout << "The minimum value for bool is: " << false << endl;

     /**
      * sizeof of sample variables. In this part, we are using the sizeof operator to determine the size of various data types in C++. We are printing the size of short, int, long, long long, float, double, long double, and bool. This part demonstrates how to use the sizeof operator to determine the size of data types in C++, which can help us write more efficient and memory-conscious code.
      * fifteenth part. In this part, we are declaring a variable "age" of type int, and we are initializing it with the value 35. We are then using the sizeof operator to determine the size of the "age" variable in bytes, and we are printing the result to the console. This part demonstrates how to use the sizeof operator to determine the size of a variable in C++, which can help us understand how much memory a particular variable is occupying in our program.
      */
    cout << "The sample size of variables: " << endl;
    int age {35};
    cout << "The size of age variable is: " << sizeof(age) << " bytes." << endl;
    cout << "Alternative use of sizeof operator: " << sizeof age << " bytes." << endl;

    double wage { 123456.78};
    cout << "The size of wage variable is: " << sizeof(wage) << " bytes." << endl;
    cout << "Alternative use of sizeof operator: " << sizeof wage << " bytes." << endl;
    
    return 0;
}