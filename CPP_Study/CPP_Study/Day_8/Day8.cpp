#include "Day8.h"

#include <iostream>

#include "../Day_1/Day1.h"

/**
 * While Loops:
 *      - Similar to while loops except it just checks for a condition.
 *      - Checks for a condition/statement and performs an operation until that condition is no longer met.
 *      - While loops and for loops are somewhat interchangeable, the condition being if a var is required.
 *      - NOTE: Statements in a while loop that doesn't result is some data change may cause an infinite loop.
 *      https://zenn.dev/posita33/books/ue5_starter_cpp_and_bp_001/viewer/chap_a0175_while_loop
 *      https://learn.microsoft.com/ja-jp/cpp/cpp/while-statement-cpp?view=msvc-170
 *      https://www.simplilearn.com/tutorials/cpp-tutorial/while-loop-in-cpp
 *      https://www.geeksforgeeks.org/cpp-while-loop/
 *      https://www.w3schools.com/cpp/cpp_break.asp
 */

/* Main Function body - Rename to main run. Replace function call with one of the other functions to see effect*/
int Loops()
{
    Log("Example Do Loop //// ===================");
    ExampleDoWhileTwo();
    std::cin.get();
    return 0;
}

// 使い方
void ExampleWhileLoopOne()
{
    float x = 0.00;
    //"条件"
    while (x< 5.00)
    {
        // 繰り返し実行されるコード
        x += 0.01f;
        LogFloat(x);
    }
}

// 例 2
void ExampleWhileLoopTwo()
{
    // Checks if x is less than y, while x is less than y, keep incrementing by 0.01
    float x = 0.00f;
    float y = 5.00f;
    while (x < y)
    {
        x += 0.01f;
        LogFloat(x);
    }
}

// 例 3
void ExampleWhileLoopThree()
{
    int T = 0;
    int Count = 0;
    while (Count <= 10)
    {
        LogInt(T);
        T ++;
        Count ++;
    }
}


// 例 3
int ExampleBreak(int a, int b)
{
    while (a <= b)
    {
        // A starts off as 2. Loop iteration occurs until number is > 50
        a++;
        if (a>50)
        {
            break;
        }
        LogInt(a);
    }
    return a;
}

/**
 * Do While :
 * 
 *      - Run the body at least once
 *      - Will then enter a loop until the condition is no longer true.
 *      https://www.programiz.com/cpp-programming/do-while-loop
 *      https://www.w3schools.com/cpp/cpp_do_while_loop.asp
 *      https://cplusplus.com/doc/tutorial/control/
 *      https://learn.microsoft.com/ja-jp/cpp/cpp/do-while-statement-cpp?view=msvc-170
 *      https://techis.jp/guide/cpp/cpp_do_while_loop
 */

// 使い方
void ExampleDoWhileOne()
{
    double d1 = 0.10;
    double d2 = 0.40;
    do
    {
        // 繰り返し実行されるコード
        d1 += 0.01;
        LogFloat(d1);
    }
    //"条件"
    while (d1 < d2);
}

// 例 2
void ExampleDoWhileTwo()
{
    double Pi = 3.14159;
    double E = 2.718281828;

    int Count = 0;
    
    bool Condition = true;
    
    do
    {
        std::cout << "Count: " << Count << '\n';
        std::cout << "Pi: " << Pi << '\n';
        std::cout << "E " << E << '\n';
        std::cout << "Pi + E*count: " << Pi + E * Count << '\n';
        Log("==========================");
        Count++;
        if (Count <= 100)
        {
            Condition = true;
        }
        else
        {
            Condition = false;
        }
    } while (Condition);
}


// 例 3
int ExampleContinue(int j)
{
    do
    {
        j +=10;
        const int k = j * j;
        if (k > 1000)
        {
            continue;
        }
        LogInt(j);
        LogInt(k);
        Log("===================");
    }while (j <= 100);
    return 0;
}
