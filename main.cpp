/*
 * This is an example of a multi-line comment
 * This document serves to provide a quick cheatsheet
 * to basic c++ syntax and functions.
 */

#include "main.h"
#include <cstdlib>  // Allows import of c standard library containing various std functions
#include <iostream> // Allows to read and write data
#include <string> // Work with strings
#include <limits> // Work with mix & max values
#include <vector> // Work with vectors
#include <sstream> // Work with string streams
#include <numeric> // Work with sequences of values
#include <ctime> //  Work with time
#include <cmath> //  Provides common math function

// Avoids having to type in std every single time.
using namespace std;

//Global variables
int imGlobal = 0;
const double PI = 3.142;

// Main function call that gets executed when running your program
int main(int argc, char** argv)
{
    /*stream insertion operator required if namespace is not declared
     *std::cout<<"Hello World" <<endl;
     */
    cout<< "Hello World" << endl;

    cout<< "" << endl;

    bool free  = true; // boolean 
    char myGrade = 'A'; // Characters allows for up to 256 single characters
    short int smallnum = 10;
    
    // Integers. 
    cout << "Min unsigned short int " <<
        numeric_limits<unsigned short int>::min()
        <<endl;
    cout << "Max unsigned short int " <<
        numeric_limits<unsigned short int>::max()
        <<endl;
    cout << "Min short int " <<
        numeric_limits< short int>::min()
        <<endl;
    cout << "Max short int " <<
        numeric_limits< short int>::max()
        <<endl;
    cout << "Min int " <<
        numeric_limits<int>::min()
        <<endl;
    cout << "Max int " <<
        numeric_limits<int>::max()
        <<endl;

    cout<< "" << endl;
    
    // Floats
    cout << "Min float " <<
        numeric_limits<float>::min()
        <<endl;
    cout << "Max float " <<
        numeric_limits<float>::max()
        <<endl;
    cout << "Min double " <<
        numeric_limits<double>::min()
        <<endl;
    cout << "Max double " <<
        numeric_limits<double>::max()
        <<endl;
    cout << "Min long double " <<
        numeric_limits<long double>::min()
        <<endl;
    cout << "Max long double " <<
        numeric_limits<long double>::max()
        <<endl;
    return 0;
}

