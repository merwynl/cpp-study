#include "Day11.h"

#include <iostream>

#include "../Day_1/Day1.h"

/**
* References:
*   A reference is an alias to an existing variable.
*   References aren't by themselves variables and require initialization to the different variable.
*   Unlike pointers, you can't create a reference variables you have to point to an existing one.
*   Values can't be assigned to references when declared. They can only take an existing variable.
*   Values can be reassigned to the referenced variable.
*   Reference themselves don'toccupy their onw memory or storage
*   Referenced are denoted by the & next to the data type

*/

int x = 10;

int main()
{
    std::string myStr = "Hello";
    
    ExampleReferenceOne();
    ExampleReferenceTwo();
    ExampleReferenceThree();

    // Value of x will be copied into this function
    ExampleReferenceFour(x);
    ExampleReferenceFive(&x);
    ExampleReferenceSix(myStr);

    std::cin.get();
    
    return 0;
}

void ExampleReferenceOne()
{
    Log("Example Reference One:");
    Log("======================");

    std::string Food = "Ramen";
    std::string &RefMeal = Food;

    std::cout << "Food: " << Food << '\n';
    std::cout << "RefMeal: " << RefMeal << '\n';

    Log("");
}

int ExampleReferenceTwo()
{
    Log("Example Reference Two:");
    Log("======================");

    int a = 5;
    int& RefNum = a;

    std::cout << "RefNum: " << RefNum << '\n';

    Log("");
    return 0;
}

int ExampleReferenceThree()
{
    Log("Example Reference Three:");
    Log("========================");

    // Example of using reference to change the value of x
    int& RefX = x;
    std::cout << "x: " << x << '\n';
        RefX = 20;
    std::cout << "x: " << x << '\n';

    Log("");
    return 0;
}

// When called, the argument value will be passed through this function 
void ExampleReferenceFour(int value)
{
    Log("Example Reference Four:");
    Log("========================");
    LogInt(value);
    Log("");
}

// Instead of directly passing in a value, we can pass in the memory address of that value
void ExampleReferenceFive(int* value)
{
    Log("Example Reference Five:");
    Log("=======================");

    // Dereferencing that address, else it will increment the address
    (*value)++;
    LogInt(*value);
    Log("");
}

void ExampleReferenceSix(std:: string& str)
{
    Log("Example Reference Six:");
    Log("=======================");
    str += "!";
    std::cout << str << '\n';
    Log("");
}