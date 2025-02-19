#include "../Day_1/Day1.h"
#include "Day7.h"
#include <iostream>

/**
   * For Loops:
   * Useful to run code a specific number of times.
   *    - e.g: Printing a statement 5 times.
   * Useful for big picture items: e.g: think of a game loop
   * Useful for arrays
   * 
   * Requires 3 components, separated by a semicolon;:
   *    - A variable declaration (typical convention is to use i for iterator - is triggered once)
   *    - A condition that basically says while a condition is true, keep executing code
   *    - An increment operation (increment the assigned variable by a given value - occurs at the end of the loop)
   *    
   * Can take some input and return an output
   * https://www.w3schools.com/cpp/cpp_for_loop.asp
   * https://en.cppreference.com/w/cpp/language/for
   * https://www.geeksforgeeks.org/cpp-loops/
   * https://techis.jp/guide/cpp/cpp_for_loop
   * https://learn.microsoft.com/ja-jp/cpp/cpp/for-statement-cpp
   * 
*/


int ForLoops()
{
    BasicForLoop(4);
    std::cin.get();
    return 0;
}

// Basic for loop that iterates over i and prints some text until i is == 5
int BasicForLoop(int i)
{
    for (; i < 5; i++)
    {
        Log("Hello World!");
    }
    return 0;
}