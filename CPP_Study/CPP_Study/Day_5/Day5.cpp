/**
 * Functions & User Input:
 *
 *  - Compares the results of an expression, then performs some action based on that result.
 *  - If statements can be chained using else and else if statement
 *  - ElseIf statement can be used to compare a separate set of expressions.
 *  - Multiple else if conditions can be invoked to verify the result of something.
 *  - https://www.w3schools.com/cpp/cpp_user_input.asp
 *  - https://techis.jp/guide/cpp/cpp_user_input
 *  - https://zenn.dev/reputeless/books/standard-cpp-for-competitive-programming/viewer/io
 *  - https://cpprefjp.github.io/reference/iostream/cin.html
 *  - https://aeroastro.sd.tmu.ac.jp/hydrodynamics/main/colums/CPP/std_cin.html
 *  - https://jp-seemore.com/iot/23498/
 */
#include <iostream>
#include "../Day_1/Day1.h"

void Welcome();
void GetQuestion();
char GetUserInput();
void PrintResponse(char ResponseToPrint);

/**
 * Main Function body - Rename to main run
 */
int QueryUserInput()
{
    GetQuestion();
    std::cin.get();
    return 0;
}

/** Prints a standard welcome message */
void Welcome()
{
    Log( "Welcome!");
}

/** Calls several functions to pose a question to the user */
void GetQuestion()
{
    Welcome();
    char Answer = GetUserInput();
    PrintResponse(Answer);
}

/** Asks a question, declares a var of type char, gets user input
 *  stores the results inside GetResponse and returns it
    */
char GetUserInput()
{
    Log("Please enter y/n: ");
    char GetResponse;
    std::cin >> GetResponse;
    return GetResponse;
}

/** Prints the results of a user's input */
void PrintResponse(char ResponseToPrint)
{
    std::cout << "You have entered:" << ResponseToPrint << '\n'; 
}
