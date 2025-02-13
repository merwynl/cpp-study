// Functions & User Input

// Built in library that includes functions for input/output streams.
#include <iostream>
#include <ostream>

/* Declaring a function through a function prototype whereby the main function body comes later.
* This is useful for defining in advance, many functions that you'll need in a document.
* */

void Welcome();
void GetQuestion();
char GetUserInput();
void PrintResponse(char ResponseToPrint);

/* Main Function body - Rename to main run */
int QueryUserInput()
{
    GetQuestion();
    std::cin.get();
    return 0;
}

void Welcome()
{
    // Prints a welcome note
    std::cout << "Welcome!" << '\n';  
}

void PrintResponse(char ResponseToPrint)
{
    // Prints the results of a user's input
    std::cout << "You have entered:" << ResponseToPrint << '\n'; 
}

void GetQuestion()
{
    // Calls the welcome function
    Welcome();

    // Store the results of the user input inside a variable
    char Answer = GetUserInput();

    // Calls the function that prints the results of the user's response
    PrintResponse(Answer);
}

char GetUserInput()
{
    // Regular print output statement
    std::cout << "Please enter y/n: ";

    // Char denotes single character types. MOre characters are not allowed
    char GetResponse;
    
    // cin uses the right stream operator to get an input
    std::cin >> GetResponse;
    
    return GetResponse;
}


// 使い方
char ExampleUserInput()
{
    char UserInput;
    
    // Gets some user input and returns it
    std::cin >> UserInput;
    return UserInput;
}