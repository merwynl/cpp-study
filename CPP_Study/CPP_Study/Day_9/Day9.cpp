#include "../Day_1/Day1.h"
#include <iostream>

/**
 * Shows an example of linking to a function in separate cpp file and the use of header files.
 */

// An example of a static function to signify this function will only ever be declared for this translation unit 
static int Multiply (int a, int b)
{
    Log ("Result: ");
    return a * b;
}

int HeaderFiles()
{
    int x = Multiply(2,4);
    x++;
    const char* message = "Hello";
    for (int i = 0; i < 5; i++)
    {
        const char c = message[i];
        std::cout << c << '\n';
    }
    Log("Hello World!");
    std::cin.get();
    return 0;
}
