#include "Day8.h"
#include <iostream>

#include "../Day_1/Day1.h"

/**
 * While Loops:
 *      - Similar to while loops except it just checks for a condition.
 *      - Below are how while loops are written out
 *      - Checks for a condition/statement and performs an operation until that condition is no longer met.
 *      - While loops and for loops are somewhat interchangeable, the condition being if a var is required.
 *      - NOTE: Statements in a while loop that doesn't result is some data change may cause an infinite loop.
 *      https://zenn.dev/posita33/books/ue5_starter_cpp_and_bp_001/viewer/chap_a0175_while_loop
 */

/* Uncomment to run */
int main()
{
    ExampleDoWhile();
    std::cin.get();
    return 0;
}

// 使い方
void ExampleWhileLoopOne()
{
    float x = 0.00;
    const char result = x;
    //"条件"
    while (x< 5.00)
    {
        // 繰り返し実行されるコード
        x += 0.01f;
        std::cout << x << '\n';
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
        std::cout << x << '\n';
    }
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
void ExampleDoWhile()
{
    double d1 = 0.10;
    double d2 = 0.40;
    do
    {
        // 繰り返し実行されるコード
        d1 += 0.01;
        std::cout << d1 << '\n';
    }
    //"条件"
    while (d1 < d2);
}
