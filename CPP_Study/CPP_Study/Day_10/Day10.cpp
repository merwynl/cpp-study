#include "Day10.h"
#include <iostream>
#include "../Day_1/Day1.h"
/**
* Pointers:
*       - In C++, pointers are a way of managing that memory.
*       - A pointer in an integer variable that stores a memory address.
*       - Picture a street of houses with the street representing a memory address
*       - Each house representing a byte in that memory address
*       - A pointer essentially tells us which specific byte of memory/house is in that memory address
*/

int Pointers()
{
    // PointersExampleOne();
    // PointersExampleTwo();
    // PointersExampleThree();
    // PointersExampleFour();
    // PointersExampleFive();
    // PointersExampleSix();
    // PointersExampleSeven();
    PointersExampleEight();
    std::cin.get();
    return 0;
}

void PointersExampleOne()
{
    // Can also be expressed as void* ptr = NULL; or void* ptr = 0;
    void* voidptr = nullptr;

    // Takes the memory address of var and assigns it to a pointer called ptr
    int var = 8;
    void* ptr = &var;
}

int PointersExampleTwo()
{
    Log("Example of using pointers to access memory addresses");
    Log("====================================================");
    int x = 100;
    int* ptr = &x;

    // Prefix ptr with a * to see the effect 
    std:: cout << "Value of ptr: " << ptr << '\n';
    return *ptr;
}


int PointersExampleThree()
{
    int var = 8;
    int* ptrInt = &var;
    Log("Result of var before dereferencing:");
    Log("===================================");
    LogInt(*ptrInt);
    
    // Showcasing an example of dereferencing to change the value of an existing variable.
    // Note that this is where types come in, to explicitly define the number of bytes a data has
    *ptrInt = 10;
    Log("Using dereferencing and pointers to alter a previously declared variable.");
    Log("=========================================================================");
    Log("Result of var:");
    LogInt(var);
    
    Log("==================");
    Log("Result of *ptrInt:");
    LogInt(*ptrInt);
    return *ptrInt;
}

int PointersExampleFour()
{
    // Showcasing allocating memory of a certain size to the heap
    // A char has 1 byte. Here, we're assigning 8 bytes of memory, returning a pointer to the beginning
    char* buffer = new char[8];

    // memset copies the given value to an assigned number of bytes in memory
    memset(buffer, 0, 8);

    // Showcasing how to free memory from the heap once we're done with it.
    delete[] buffer;
    return 0;
}

int PointersExampleFive()
{
    // Showcasing an example of using double pointers
    char* buffer2 = new char[5];
    memset(buffer2, 0, 5);

    char** buffer3 = &buffer2;

    delete[] buffer3;
    return 0;
}

int PointersExampleSix()
{
    int Numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int* NumberPtr = Numbers;
    Log("================================");
    Log("Result of*NumberPtr in an array:");
    LogInt(*NumberPtr);

    NumberPtr++;
    Log("=============================================");
    Log("Result of incrementing a pointer in an array:");
    LogInt(*NumberPtr);
    
    NumberPtr--;
    Log("=============================================");
    Log("Result of decrementing a pointer in an array:");
    LogInt(*NumberPtr);
    
    NumberPtr+= 9;
    Log("=======================================================");
    Log("Result of incrementing with a += a pointer in an array:");
    LogInt(*NumberPtr);
    
    return *NumberPtr;
}

void PointersExampleSeven()
{
    Container container = {"Sam", 5, 6, 7};
    Container* containerPtr = &container;

    Log("==================================================");
    Log("Result of printing the memory address of a pointer");
    std:: cout << "Value of *containerPtr: " << containerPtr<< '\n';
    Log("");

    Log("=================================================================");
    Log("Result of dereferencing an int value in a struct from a pointer");
    std:: cout << "Value of *containerPtr: " << (*containerPtr).x << '\n';
    Log("");

    Log("=================================================================");
    Log("Result of dereferencing an int value in a struct from a pointer");
    std:: cout << "Value of *containerPtr: " << (*containerPtr).z << '\n';
    Log("");
    
    Log("=================================================================");
    Log("Result of dereferencing a string value in a struct from a pointer");
    std:: cout << "Value of *containerPtr: " << (*containerPtr).Name << '\n';
    Log("");

    // Showcasing an example of accessing a data from a pointer without dereferencing.
    Log("=========================================================================");
    Log("Result of a string value in a struct from a pointer without dereferencing");
    std:: cout << "Value of *containerPtr: " << containerPtr->Name << '\n';
    
}

void PointersExampleEight()
{
    // Declare array
    int arr[5] = {5, 10, 15, 20, 25};

    // Declare & assign pointer
    int* ptr = arr;

    for (int i = 0; i < 5; i++)
    {
        Log("");
        Log("value at ptr");
        Log("=============");
        std::cout << ptr << '\n';
        Log("");

        Log("value at *ptr");
        Log("=============");
        std::cout << *ptr << '\n';
        
        // Increment pointer by 1
        ptr++;
    }
}
