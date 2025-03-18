#include "Day14.h"

#include <algorithm>
#include <complex.h>
#include <iostream>
#include "../Day_1/Day1.h"

int PrintSequentialNumbers();
int PrintEvenNumbers();
int PrintOddNumbers();
int CheckPosNeg();
int GetUserInput();
int LinearSearchNumber();
int CheckKeyExists(int array[], int size,int key);
int SelectionSort(int array[], int size);
int GetLargestIndex(int a, int b, int c);
int FindMaxIndex(const int arr[], int size);

int main()
{
    int numbers[] = {3, 2, 7, 1, 20, 5, 8, 9, 50, 10, 15, 4, 30, 6, 0};
    int key = 9;
    int size = sizeof(numbers)/sizeof(numbers[0]);

    SelectionSort(numbers, size);
    // LinearSearchNumber();
    return 0;
}

int GetUserInput()
{
    int number;
    std::cout << "Please enter a number: ";
    std::cin >> number;
    return number;
}

int LinearSearchNumber()
{
    int numbers[] = {10, 15, 20, 30, 50, 75, 80};
    int arraylength = sizeof(numbers) / sizeof(numbers[0]);
    int n = GetUserInput();
    for (int i = 0; i < arraylength; i++)
    {
        if (numbers[i] == n)
        {
            std::cout << "The number " << numbers[i] << " is present at position " << i << '\n';
            return 0; 
        }
    }
    std::cout << "That number does not exist" << '\n';
    return 1;
}


int PrintSequentialNumbers()
{
    int number = GetUserInput();
    for (int i = 0; i <number; i++)
    {
        std::cout << i << '\n';
    }
    return 0;
}

int PrintEvenNumbers()
{
    int number = GetUserInput();
    for (int i = 0; i <number; i++)
    {
        if (i % 2 == 0)
        {
            std::cout << i << '\n';
        }
    }
    return 0;
}

int PrintOddNumbers()
{
    int number = GetUserInput();
    for (int i = 0; i <number; i++)
    {
        if (i % 2 > 0)
        {
            std::cout << i << '\n';
        }
    }
    return 0; 
}

int CheckPosNeg()
{
    int number = GetUserInput();
    if (number > 0)
    {
        std::cout << "This is a positive number" << '\n';
    }
    else if (number < 0)
    {
        std::cout << "This is a negative number" << '\n';
    }
    else
    {
        std::cout << "You have entered 0" << '\n';
    }
    return 0;
}

int CheckKeyExists(int array[],int size,int key)
{
    bool exists = std::binary_search(array, array + size, key);
    if (exists)
    {
        std::cout << key << " exists" << std::endl;
        return 1;
    }
    else
    {
        std::cout << key << " not found" << std::endl;
        return 0;
    }
}

int SelectionSort(int array[], int size)
{
    int LastSearchIndex = 0;
    for (int i = 1; i < size; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[minIndex])
            {
                minIndex = j;
            }
            if (minIndex != i)
            {
                int temp = array[i];
                array[i] = array[minIndex];
                array[minIndex] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << "Number [" << i << "]  = " << array[i] << '\n';
    }
    return 0;
}

int GetLargestIndex(int a, int b, int c)
{
    int maxValue = a;
    if (a == maxValue)
    {
        return 0;
    }
    else if (b == maxValue)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

int FindMaxIndex(const int arr[], int size)
{
    if (size == 0) {
        return -1; 
    }
    int maxIndex = 0;
    int maxValue = arr[0];

    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}



