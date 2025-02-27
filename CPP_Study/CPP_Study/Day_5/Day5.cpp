// Functions & User Input

// Built in library that includes functions for input/output streams.
#include <iostream>
#include "../Day_1/Day1.h"

/**
    * Declaring a functions through a function prototype whereby the main function body comes later.
    * This is useful for defining in advance, many functions that you'll need in a document.
*/

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
    Log( "Welcome!");
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
    Log("Please enter y/n: ");
    // std::cout << "Please enter y/n: ";

    // Char denotes single character types. MOre characters are not allowed
    char GetResponse;
    
    // cin uses the right stream operator to get an input
    std::cin >> GetResponse;
    
    return GetResponse;
}

/**
 * 標準入力:
 *
 *      - Compares the results of an expression, then performs some action based on that result.
 *      - If statements can be chained using else and else if statement
 *      - Else if statement can be used to compare a separate set of expressions.
 *      - Multiple else if conditions can be invoked to verify the result of something.
 *      https://www.w3schools.com/cpp/cpp_user_input.asp
 *      https://techis.jp/guide/cpp/cpp_user_input
 *      https://zenn.dev/reputeless/books/standard-cpp-for-competitive-programming/viewer/io
 *      https://cpprefjp.github.io/reference/iostream/cin.html
 *      https://aeroastro.sd.tmu.ac.jp/hydrodynamics/main/colums/CPP/std_cin.html
 *      https://jp-seemore.com/iot/23498/
 */

// 使い方
char ExampleUserInput()
{
    char UserInput;
    
    /** は標準入力ストリームに関連付けられたグローバルオブジェクト
    *   から >> 演算子を「入力可能な型」の変数に向けると、その変数に標準入力からの値が格納される
    *   >> を連続して使用し、複数の変数に入力することができる
    */
    std::cin >> UserInput;
    return UserInput;
}