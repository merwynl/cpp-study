// Scope, Identifiers & Keywords

// Built in library that includes functions for input/output streams.
#include <iostream>

// Global variables. Variables declared globally outside a function can be utilized across all scopes.
int a = 10;
int b = 100;

/* Main Function body - Rename to main run */
    int Scope()
    {
    // Local vars
    int x = 57;
    {
        // You can traverse down a scope and reference a variable above but not the other way around
        std::cout << x << '\n';  
    }
    {
        // This overwrites the globally defined var
        int a = 333;
        std::cout << a << '\n'; 
    }
    {
        // This line will not print as it exists within its own scope
        int b = 20;  
    }
    // This will print the global var "b"
    std::cout << b << '\n'; 
    
    // This line will still print the global var
    std::cout << a << '\n';
    std::cin.get();
    return 0;
}
