﻿#include <iostream>

void pIntegers(int* ptr)
{
    std::cout << *ptr << std::endl;
    { (*ptr)--; }
}

int main()
{

    int vars[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    for (int i = 9; i >= 0; i--) {

        pIntegers(&vars[9]);
    }

    return 0;
}

