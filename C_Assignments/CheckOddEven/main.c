/*
Copyright (c) 2022 Shahibur Rahaman
Licensed under MIT license

Q.|> WAP to accept numerical input from user and then check whether it is...
     odd or even.

Compiler: MSVC
*/

#include <stdio.h>

int main(void)
{
    int n;

    printf("Number: ");
    scanf("%d", &n);

    switch (n % 2)
    {
        case 0:
            printf("\n%d is an even number.\n", n);
            break;
        case 1:
            printf("\n%d is an odd number.\n", n);
            break;
        default:
            printf("\nSomething went wrong!\n");
            break;
    }
}