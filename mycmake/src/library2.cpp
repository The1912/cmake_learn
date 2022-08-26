#include <iostream>
#include "library2.h"

void addition(int a_in, float b_in)
{
    float k = a_in + b_in;
    std::cout << "Addition = " << k << std::endl;
}

void Test2::print_name2()
{
    std::cout << "Lib name is libaray1 !" << std::endl;
}

void Test2::print_number2()
{
    std::cout << "Number is " << num2 << std::endl;
}
