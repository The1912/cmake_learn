#include <iostream>
#include "library1.h"
#include "library2.h"

int main(int argc, char *argv[])
{
    std::cout << "Hello, world!\n";

    Test1 t1;
    t1.num1 = 10;
    t1.print_name1();
    t1.print_number1();

    Test2 t2;
    t2.num2 = 13;
    t2.print_name2();
    t2.print_number2();

    int a = 20;
    float b = 10.6;
    addition(a, b);

    return 0;
}
