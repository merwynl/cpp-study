#include "Day12.h"
#include <iostream>
#include "../Day_1/Day1.h"

/**
* Classes:
* 
*   - A way to group data and functionality together into a type.
*   - Variables & functions, called class members, can be declared within a class.
*   - Functions within classes are called methods.
*   - Class variables & functions can either be public of private, referred to as class visibility.
*   - Class members are private by default unless visibility is specified.
*   - Objects are created from classes. An example class may be fruit with an object of apple.
*   - A class instance or object will inherit all variables & functions from their class.
*   - Class objects will typically have some sort of attribute or variable attached, e.g: colour, weight
 */

int Classes()
{
    /**Example of invoking a class and creating an object */
    ExampleOne ObjectOne;

    /**Example of invoking a class and creating an object */
    ObjectOne.AttrOne = 1;
    ObjectOne.AttrTwo = "Hello";
    ObjectOne.AttrThree = true;
    ObjectOne.AttrFour = 3.14f;

    Log("======================================================");
    Log("Printing out ObjectOne's attrs from an assigned class:");
    LogInt(ObjectOne.AttrOne);
    LogFloat(ObjectOne.AttrFour);
    Log(" ");
    
    /**Example of invoking a class and creating an object */
    ExampleOne ObjectTwo;
    ObjectTwo.AttrOne = 2;
    ObjectTwo.AttrThree = false;
    ObjectTwo.AttrFour = 2.71f;

    Log("==========================================");
    Log("Printing out multiple attrs from ObjectTwo");
    std::cout << ObjectTwo.AttrOne << "\n" << ObjectTwo.AttrTwo << "\n" << ObjectTwo.AttrFour << "\n";
    Log(" ");

    /**Example of invoking a class and creating an object */
    Player PlayerOne;
    PlayerOne.PlayerHeight = 1.0f;
    PlayerOne.Jump(1.0f, true);

    Log("===========================");
    Log("Printing out PlayerSpeed: ");
    std::cout << PlayerOne.PlayerSpeed << "\n";
    Log(" ");
    
    Log("===========================");
    Log("Printing out PlayerHeight: ");
    std::cout << PlayerOne.PlayerHeight << "\n";
    
    std::cin.get();
    return 0;
}


