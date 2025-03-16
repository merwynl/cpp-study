/**
*   For Loops:
*   - Useful to run code a specific number of times. e.g: Printing a statement 5 times.
*   - Useful for big picture items: e.g: think of a game loop
*   - Useful for arrays
*   - Requires 3 components, separated by a semicolon;:
*      - A variable declaration (typical convention is to use i for iterator - is triggered once)
*      - A condition that basically says while a condition is true, keep executing code
*      - An increment operation (increment the assigned variable by a given value - occurs at the end of the loop) 
*   - Can take some input and return an output
*   - https://www.w3schools.com/cpp/cpp_for_loop.asp
*   - https://en.cppreference.com/w/cpp/language/for
*   - https://www.geeksforgeeks.org/cpp-loops/
*   - https://techis.jp/guide/cpp/cpp_for_loop
*   - https://learn.microsoft.com/ja-jp/cpp/cpp/for-statement-cpp
*/

#include "../Day_1/Day1.h"
#include "Day7.h"
#include <iostream>

/**
 * Main Function body - Rename to main run
 */
int ForLoops()
{
    ExampleContinue(0);
    std::cin.get();
    return 0;
}

/** Prints a statement 5 times while i is less than 5 */
int BasicForLoop(int i)
{
    for (; i < 5; i++)
    {
        Log("Hello World!");
    }
    return 0;
}

/** Prints an int x is less than 10 */
int ExampleForLoopOne(int x)
{
    for (x; x < 10; x++)
    {
       LogInt(x); 
    }
    return x;
}

//** Example of double loop*/
int ExampleForLoopTwo(int outer)
{
    for (; outer <= 10; outer++)
    {
        for (int inner = 0; inner <= 10; inner++)
        {
          std::cout << "outer = " << outer << ", inner = " << inner << '\n';  
        }
    }
    return 0;
}

/** Example of using continue to continue a loop based on a given condition */
int ExampleContinue(int j)
{
    for (j; j < 5; j++)
    {
        if (j  % 2 == 0)
            continue;
        Log ("Hello World!");
        LogInt(j);
    }
    return 0;
}

/** Example of using break to break out of a loop based on a given condition */
int ExampleBreak(int k)
{
    for (k; k < 5; k++)
    {
        if ((k + 1) % 2 == 0)
            break;
        Log ("Hello World!");
        LogInt(k);
    }
    return 0;
}



