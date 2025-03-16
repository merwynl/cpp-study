/**
 * Scope & Functions:
 * 
 * - A way to write reusable code that can change.
 * - Can take some input and return an output
 * - Doesn't always have to return a value
 * - Doesn't always have to include parameters.
 */

#include <iostream>
int a = 10;
int b = 100;

/**
 * Main Function body - Rename to main run
 */
    int Scope()
    {
        int x = 57;
    {
        /** You can traverse down a scope and reference a variable above but not the other way around */
        std::cout << x << '\n';  
    }
    {
        /** Overwrites the globally defined var */
        int a = 333;
        std::cout << a << '\n'; 
    }
    {
        /** Will not print as it exists within its own scope */
        int b = 20;  
    }
        
    // Prints the globally defined vars "b" & "a"
    std::cout << b << '\n'; 
    std::cout << a << '\n';
    std::cin.get();
    return 0;
}
