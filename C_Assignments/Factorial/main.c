/*
Copyright (c) 2022 Shahibur Rahaman
Licensed under MIT license

Q.|> WAP to find the factorial of a number.

Compiler: MSVC
*/

#include <stdio.h>

int main(void)
{
    int num;

    printf("Number: ");
    scanf("%d", &num);    

    printf("Factorial of %d is %d\n", num, fact(num));

    return 0;
}

int fact(int n)
{
    int product = 2;

    for (int i = 3; i <= n; i++)
    {
        product *= i;
    }
    return product;
}