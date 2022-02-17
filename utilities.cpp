#include "utilities.h"
#include <iostream>
void printString(const char* str,size_t size)
{

    for(int i = 0;i < size;++i)
    {
        std::cout<<str[i];
    }
}
void printInteger(const int& value)
{
    std::cout<<value;
}
void printDouble(const double& value)
{
    std::cout<<value;
}
