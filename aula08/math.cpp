#include "math.h"

int Math::fatorial(int num)
{
    int fat = 1;

    for (int i = 0; i < num; i++)
    {
        fat = fat * (i + 1);
    }

    return fat;
}