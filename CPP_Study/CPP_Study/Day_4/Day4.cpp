/**
 * Functions:
 *  - Function can be declared while the main body comes later
 *  - HelloWorld() calls the welcome function
 *  - PrintNumber(3) calls the print number function and passes in a literal value
 *  - BasicFunction(2, 3) calls the basic function and passes in two literal values
 *  - BasicFunction(Var, 4) passes in a variable to that basic function
 *  - https://en.cppreference.com/w/cpp/language/functions
 *  - https://www.programiz.com/cpp-programming/function
 *  - https://www.w3schools.com/cpp/cpp_functions.asp
 *  - https://zenn.dev/posita33/books/ue5_starter_cpp_and_bp_001/viewer/chap_02_cpp-function
 *  - https://cpprefjp.github.io/reference/functional/function.html
*/

#include <iostream>
#include "../Day_1/Day1.h"

/** Function prototyping. Useful for defining in advance, many functions that you'll need in a document. */
void HelloWorld();
void PrintNumber(int NumToPrint);
int BasicFunction(int a, int b);

/**
 * Main Function body - Rename to main run
 */
int Functions()
{
    HelloWorld();
    PrintNumber(3);
    int Var = BasicFunction(2, 3);
    int Var2 = BasicFunction(Var, 4);
    int Var3 = BasicFunction(Var, Var2);
    
    PrintNumber(BasicFunction(2, 3));
    PrintNumber(Var2);
    PrintNumber(Var3);

    std::cin.get();
    return 0;
}

void ExampleFunction()
{
    Log("Do some operation");
}

void HelloWorld()
{
    Log("Hello!");
}

/** Function that takes an int input and prints that input */
void PrintNumber(int NumToPrint)
{
    LogInt(NumToPrint); 
}

/** Basic function that takes two values, adds them and logs the result  */
int BasicFunction(int a, int b)
{
    int Result = a + b;
    LogInt(Result);
    return Result;
};
