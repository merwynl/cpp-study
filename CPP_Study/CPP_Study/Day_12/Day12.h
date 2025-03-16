#pragma once
#include <string>

/**
 * Basic class example
 */
class ExampleOne
{
public:
    int AttrOne;
    std::string AttrTwo;
    bool AttrThree;
    float AttrFour;
};

/**
 * Basic example of creating a method
 */
class Player
{
public:
    float PlayerHeight;
    float PlayerSpeed = 1.0f;
    float JumpAmount = 2.0f;
    
    void Jump(float CurrentHeight,bool JumpPressed )
    {
        if (JumpPressed)
        {
            // Doubles the current Player Speed
            PlayerSpeed *= 2.0f;

            // Adds a small jump to the current player height (JumpAmount * PlayerSpeed)
            PlayerHeight = CurrentHeight * (JumpAmount * PlayerSpeed);
        }
        else
        {
            // Resets the player speed to 1.0f
            PlayerSpeed = 1.0f;
        }
    }
};


