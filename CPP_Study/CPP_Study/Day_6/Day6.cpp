// Incremental Operators

// Built in library that includes functions for input/output streams.
#include <iostream>

// Declaring a function through a function prototype whereby the main function body comes later.
// This is useful for defining many functions that you'll need in a document 
void IncrementInt();
void ExampleIncrementalOperator();

/* Main Function body - Rename to main run */
int IncrementalOperators()
{
    IncrementInt();
    std::cin.get();
    return 0;
}

void IncrementInt()
{
    // Examples of using preincremental operator
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

//使い方
void ExampleIncrementalOperator()
{
    // Examples of using preincremental operator
    int x = 1;

    // これは int x = x + 1;　と同じです。更に ++x;で使い可能性もできます。ですが　++xとx++と違い意味があります。
    // https://qiita.com/suuungwoo/items/e054fdcb5a4805bb226b
    // https://zenn.dev/posita33/books/ue5_starter_cpp_and_bp_001/viewer/chap_a0123_increment_decrement
    x += 1;
    std::cout << "x += 1: " << x << '\n';
}

