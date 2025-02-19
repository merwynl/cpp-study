// While & Do While Loops

#include "Day7.h"
#include <iostream>
#include <ostream>

/**
 * Declaring a function through a function prototype whereby the main function body comes later.
 * This is useful for defining many functions that you'll need in a document 
 * Note that until this function is called, calls to AsShared() will result in an empty pointer.
 */

void WhileLoop();
void DoWhile();

/* Uncomment to run */
int WhileLoops()
{
    std::cin.get();
    return 0;
}

/**
 * While Loops:
 * 
 *      - Below are how do while loops are written out
 *      - Checks for a condition/statement and performs an operation until that condition is no longer met. 
 *      - NOTE: Statements in a while loop that doesn't result is some data change may cause an infinite loop.
 *      https://zenn.dev/posita33/books/ue5_starter_cpp_and_bp_001/viewer/chap_a0175_while_loop
 */

// 使い方
void ExampleWhileLoopOne()
{
    float x = 0.00;
    //"条件"
    while (x< 5.00)
    {
        // 繰り返し実行されるコード
        x += 0.01f;
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
    }
    //"条件"
    while (d1 < d2);
}
