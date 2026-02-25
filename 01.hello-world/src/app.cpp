#include <iostream>
// The line "#include <iostream>" is a preprocessor directive that tells the compiler to include
// the contents of the iostream header file in the program. The iostream library is part of the C++ standard library and provides facilities for input and output operations.
// By including this header, you gain access to the standard input and output stream objects, such
// as "cin" for input and "cout" for output. This allows you to read data from the user and display information on the console.

// The line "using namespace std;" is a directive that tells the compiler to use the standard namespace.
// In C++, the standard library functions and objects (like cout, cin, string, etc.) are defined within the "std" namespace.
// By including this line, you can use these standard library features without having to prefix them with "std::". 
// For example, instead of writing "std::cout", you can simply write "cout". 
// However, it's important to note that using "using namespace std;" 
// can lead to name conflicts if there are other libraries or code that define functions or objects with the same names. 
// Therefore, it's often recommended to use it in small programs or within specific scopes to avoid potential issues in larger projects.
using namespace std;

int main() {
    /** 
     * The main function is the starting point of a C++ program. 
     * It is where the execution of the program begins. 
     * The main function must return an integer value, which typically indicates the success or failure of the program. 
     * A return value of 0 usually indicates that the program executed successfully, while a non-zero value indicates an error or abnormal termination.
     * The main function can also take command-line arguments, which are passed as parameters to the function. 
     * These arguments can be used to provide input to the program when it is executed from the command line.
     */
    // cout purpose
    // The "cout" object is used in C++ to output data to the standard output
    // stream, which is usually the console or terminal. It is part of the iostream library and is defined in the std namespace.
    // The "<<" operator is used to insert data into the output stream.
    // In the example "cout << "Hello, World!" << endl;", the string "Hello, World!" is sent to the output stream, 
    // followed by "endl", which is a manipulator that inserts a newline character and flushes the output buffer.
    // This means that when the program is run, it will display "Hello, World!" on the console, and then move to a new line.
    // The "endl" manipulator is often used to ensure that the output is displayed immediately, especially when the program is running in an environment where buffering may occur.
    // In summary, "cout" is used to display output to the user, and "endl" is used to create a new line and flush the output buffer.
    cout << "Hello, World!" << endl;
    return 0;
}

