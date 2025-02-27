/*
* This document serves to provide a quick cheatsheet
 * to basic c++ syntax & principles.
 */


/* Built in library that includes functions for input/output streams.
 * Required for printing string data */
#include <iostream>
#include <ostream>
#include "Day1.h"

/* Main Function body - Rename to main run */
int PrintingString()
 {
  // Printing a string to the console. \n starts a new line.  
  std::cout << "You Died!" << '\n';

   /* Avoid system pauses as it's platform dependent, insecure and slow. 
  https://stackoverflow.com/questions/1107705/systempause-why-is-it-wrong
  system("pause"); // Pauses the program until the user presses a key. */
 
  std::cin.get();
  return 0;
 } 


/** Setting up a function for logging messages. This function can be called in other cpp files by
*   declaring the function and calling them in either an entry point or in another function.
*/
void Log(const char* message)
{
 std::cout << message << '\n';
}


int LogInt(int IntNumber)
{
 std::cout << IntNumber << '\n';
 return IntNumber;
}

float LogFloat(float FloatNumber)
{
 std::cout << FloatNumber << '\n';
 return FloatNumber;
}