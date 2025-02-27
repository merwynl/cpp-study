// Functions

#include <iostream>

#include "../Day_1/Day1.h"

/**
   * Functions:
   * A way to write resuable code that can change.
   * Can take some input and return an output
   * Doesn't always have to return a value
   * Doesn't always have to include parameters.
   * https://en.cppreference.com/w/cpp/language/functions
   * https://www.programiz.com/cpp-programming/function
   * https://www.w3schools.com/cpp/cpp_functions.asp
   * https://zenn.dev/posita33/books/ue5_starter_cpp_and_bp_001/viewer/chap_02_cpp-function
   * https://cpprefjp.github.io/reference/functional/function.html
   * 
*/

// Function that prints a basic string
void HelloWorld()
{
    Log("Hello!"); // std::cout << "Hello!" << '\n';
}

// Function that takes an int input and prints that input
void PrintNumber(int NumToPrint)
{
    LogInt(NumToPrint); // std::cout << NumToPrint << '\n';
}

// Basic function that takes two values, adds them and returns the result 
int BasicFunction(int a, int b)
{
    int Result = a + b;
    LogInt(Result); // std::cout << Result << '\n';
    return Result;
};

/* Main Function body - Rename to main run */
int Functions()
{
    // Calls the welcome function
    HelloWorld();

    // Calls the print number function and passes in a literal value
    PrintNumber(3);

    // Calling a basic function and passes in two literal values
    int Var = BasicFunction(2, 3);

    // Passing in variable
    int Var2 = BasicFunction(Var, 4);

    // Chaining multiple function calls
    int Var3 = BasicFunction(Var, Var2);

    // Prints the result of the assigned vars & function calls 
    PrintNumber(BasicFunction(2, 3));
    PrintNumber(Var2);
    PrintNumber(Var3);

    std::cin.get();
    return 0;
}

// 使い方
void ExampleFunction()
{
    // この関数は何らかの操作を行う! std::cout << "Do some operation " << '\n';
    Log("Do some operation");
}
