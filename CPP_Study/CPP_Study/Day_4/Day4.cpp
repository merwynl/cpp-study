// Functions

// Built in library that includes functions for input/output streams.
#include <iostream>
#include <ostream>

// Printing a basic string
void Welcome()
{
    std::cout << "Welcome!" << '\n';  
}

// Printing an value
void PrintNumber(int NumToPrint)
{
    std::cout << NumToPrint << '\n';
}

// Basic function that takes two values, adds them and returns the result 
int BasicFunction (int a, int b)
{
    int LocalVar = a + b;
    std::cout << LocalVar << '\n'; 
    return LocalVar;
};

/* Uncomment to run */
int main()
{
    Welcome();
    
    PrintNumber(5);
    
    // Calling a basic function by passing in two literal values
    int Var = BasicFunction(2,3);
    
    // Passing in variable
    int Var2 = BasicFunction(Var,4);
    
    // Chaining multiple function calls
    int Var3 = BasicFunction(Var,Var2);
    std::cin.get();
}

