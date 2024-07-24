#include <iostream>

void pIntegers(int* ptr)
{
    int end = 10;
    int begin = 0;
    while (begin < end)
    {

        int tempValue = *(ptr + begin);
        *(ptr + begin) = *(ptr + end - 1);
        *(ptr + end - 1) = tempValue;
        end--;
        begin++;

    }

}

int main()
{

    int vars[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    pIntegers(vars);

    for (int i = 0; i < 10; i++)
    {
        std::cout << vars[i] << " ";
    }



    return 0;
}
