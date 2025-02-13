// Functions

// Built in library that includes functions for input/output streams.
#include <iostream>
#include <ostream>

// Function that prints a basic string
void HelloWorld()
{
    std::cout << "Hello!" << '\n';  
}

// Function that takes an int input and prints that input
void PrintNumber(int NumToPrint)
{
    std::cout << NumToPrint << '\n';
}

// Basic function that takes two values, adds them and returns the result 
int BasicFunction (int a, int b)
{
    int Result = a + b;
    // std::cout << Result << '\n'; 
    return Result;
};

/* Uncomment to run */
int Functions()
{
    // Calls the welcome function
    HelloWorld();

    // Calls the print number function and passes in a literal value
    PrintNumber(3);
    
    // Calling a basic function and passes in two literal values
    int Var = BasicFunction(2,3);
    
    // Passing in variable
    int Var2 = BasicFunction(Var,4);
    
    // Chaining multiple function calls
    int Var3 = BasicFunction(Var,Var2);
    
    // Prints the result of the assigned Var's & function calls 
    PrintNumber(BasicFunction(2,3));
    PrintNumber(Var2);
    PrintNumber(Var3);

    std::cin.get();
    return 0;
}

