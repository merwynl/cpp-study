#pragma once

/**
 * Example use of header files to declare functions. Below is an older way of including a header guard
 * through an ifndef statement before the existence of pragma once
 * #ifndef _header_h
 * #define _header_h
    * void Log(const char* message);
 * #endif
 */

// Logging
void Log(const char* message);
void HelloWorld();
void PrintNumber(int NumToPrint);
void PrintResponse(char ResponseToPrint);

// Increments
void IncrementInt();
void ExampleIncrementalOperator();
