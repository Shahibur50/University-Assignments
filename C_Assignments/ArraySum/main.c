/*
Copyright (c) 2022 Shahibur Rahaman
Licensed under MIT license

Q.|> WAP to find the sum of a given series.

Compiler: MSVC
*/

#include <stdio.h>

int main(void)
{
    int series[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;

    for (int i = 0; i < 10; i++)
    {
        sum += series[i];
    }
    printf("The sum of given series is: %d\n", sum);

    return 0;
}