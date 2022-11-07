/*
Copyright (c) 2022 Shahibur Rahaman
Licensed under MIT license

Q.|> WAP to to accept and integer from the user and then check for...
     divisibility by 7 and 10.

Compiler: MSVC
*/

#include <stdio.h>

int main(void)
{
    int num;

    printf("Number: ");
    scanf("%d", &num);

    if (num % 10 == 0 && num % 7 == 0)
    {
        printf("%d is divisible by both 10 and 7.", num);
    }
    else if (num % 10 == 0 && num % 7 != 0)
    {
        printf("%d is divisible by 10 but not divisible by 7.", num);
    }
    else if (num % 10 != 0 && num % 7 == 0)
    {
        printf("%d is not divisible by 10 but divisible by 7.", num);
    }
    else if (num % 10 != 0 && num % 7 != 0)
    {
        printf("%d is not divisible by 10 and not divisible by 7.", num);
    }
    printf("\n");

    return 0;
}