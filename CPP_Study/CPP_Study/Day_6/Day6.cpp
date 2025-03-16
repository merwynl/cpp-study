/**
 *   Incremental Operators:
 *  
 *  - A way of incrementing numbers.
 *  - Assignment operators operate from right to left.
 *  - Takes the value from the right side of the equation and assigns it to the left.
 *  - Operators are also known as binary operators in that both sides of an equation are changed.
 *  - i += 1; is the same as i = i+1;
 *  - i += 1; is a shorthand version
 *  - An alternative method of writing it is as: ++1;
 *  - Incremental operators come in two types: preincrement and postincrement.
 *  - The preincrement operator first increments by a given value, then it returns the result.
 *  - The post increment operator first returns the value of an identifier then increments the value by 1.
 *  - https://www.geeksforgeeks.org/cpp-increment-and-decrement-operators.
 *  - https://www.tutorialspoint.com/cplusplus/cpp_increment_decrement_operators.htm
 *  - https://qiita.com/suuungwoo/items/e054fdcb5a4805bb226b
 *  - https://zenn.dev/posita33/books/ue5_starter_cpp_and_bp_001/viewer/chap_a0123_increment_decrement
*/

#include <iostream>

void IncrementInt();
void ExampleIncrementalOperator();

/**
 * Main Function body - Rename to main run
 */
int IncrementalOperators()
{
    IncrementInt();
    std::cin.get();
    return 0;
}

/** Examples of using preincremental operator */
void IncrementInt()
{
   int Var1 = 3;
    
    Var1 += 3;
    std::cout << "i += 3: " << Var1 << '\n';
    
    Var1 -= 2;
    std::cout << "i -= 2: " << Var1 << '\n';
    
    Var1  *= 6;
    std::cout << "i *= 4: " << Var1 << '\n';
    
    Var1 /= 4;
    std::cout << "i /= 4: " << Var1 << '\n';
    
    Var1 %= 2;
    std::cout << "i %= 2: " << Var1 << '\n';
    
}

void ExampleIncrementalOperator()
{
    int x = 1;
    x += 1;
    std::cout << "x += 1: " << x << '\n';
}
