# Hello World in C++

This is a simple "Hello World" program written in C++ as part of a beginner's course.

## How to Compile and Run

1. Ensure you have a C++ compiler installed (e.g., g++ on Linux).
2. Navigate to the project directory: `/home/dhdez-blife/projects/cpp/from-beginner-course/01.hello-world`
3. Compile the code: `g++ hello_world.cpp -o hello_world`
4. Run the executable: `./hello_world`

## Code Explanation

The program includes the `<iostream>` header for input/output operations. It uses `std::cout` to print "Hello, World!" to the console and `std::endl` to insert a newline.

```cpp
// filepath: /home/dhdez-blife/projects/cpp/from-beginner-course/01.hello-world/hello_world.cpp
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```

## Explain tasks.json

This section provides an explanation of the `tasks.json` configuration file, which is commonly used in Visual Studio Code projects to define custom build, run, and debug tasks. The `tasks.json` file allows developers to automate compilation, execution, and other workflow processes specific to their C++ project setup in the beginner course's "Hello World" example.

## Explain launch.json

The `launch.json` file is a configuration file used by Visual Studio Code to define how to launch and debug your application. It specifies settings such as:

- **program**: The path to the executable to debug
- **args**: Command-line arguments to pass to the program
- **cwd**: The working directory for the debugged program
- **stopAtEntry**: Whether to stop execution at the program's entry point
- **environment**: Environment variables to set
- **console**: The console type (integratedTerminal, externalTerminal, or internalConsole)
- **sourceMap**: Whether to use source maps for debugging

This file is typically located in the `.vscode` folder at the root of your project and allows you to configure different launch configurations for various debugging scenarios.
