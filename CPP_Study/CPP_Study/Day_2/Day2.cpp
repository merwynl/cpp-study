// Variables & Data types

/* Declaring namespace imports symbols reduces the need to type std but could cause conflicts when used globally
https://www.youtube.com/watch?v=4NYC-VU-svE
https://stackoverflow.com/questions/1452721/whats-the-problem-with-using-namespace-std
https://www.reddit.com/r/cpp_questions/comments/o9gmjc/why_is_using_namespace_std_used_in_c_programs/
*/
// using namespace std;

// Built in library that includes functions for input/output streams.
#include <iostream>
#include <ostream>

/* Uncomment to run */
 int main()
 {
     // Declaring & printing variables
     char myCharacter = 'Y';
     int myInt;
     myInt = 10;
  
     std:: cout << myCharacter << '\n';
     std:: cout << myInt << '\n';

     // Reassigning variables
     myCharacter = 'N';
     myInt = 20;
     std:: cout << myCharacter << '\n';
     std:: cout << myInt << '\n';
     
     // If Statements
    int a(1); // Alternate method of declaring a variable
    int b = 13;
    if (b < a)
    {
     std::cout << "a in less than b" << '\n';
    }
    else
    {
     std::cout << "a in larger than b" << '\n';
    }

    // Else If Statements
    int x = 5;
    int y = 10;

    if (x == y)
    {
     std::cout << "x is equal to y" << '\n';
    }
    else if (x <= y)
    {
     std::cout << "x is less than y" << '\n';
    }
    else
    {
     std::cout << "x is greater than y" << '\n';
    }
  
  /* Avoid system pauses as it's platform dependent, insecure and slow. 
  https://stackoverflow.com/questions/1107705/systempause-why-is-it-wrong
  system("pause"); // Pauses the program until the user presses a key.
  */
  std::cin.get();
 }

