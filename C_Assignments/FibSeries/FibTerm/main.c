/*
Copyright (c) 2022 Shahibur Rahaman
Licensed under MIT license

Q.|> WAP to calculate fibonacci series upto n and show it.

Compiler: MSVC
*/

#include <stdio.h>

int main(void)
{
    int i, n, prev_num = 0, curr_num = 1, next_num;

    printf("Number: ");
    scanf("%d", &n);

    for (i = 3; i <= n; i++)
    {
        next_num = prev_num + curr_num;
        prev_num = curr_num;
        curr_num = next_num;
    }
    printf("Fib (%d) = %d ", n, curr_num);
    printf("\n");

    return 0;
}
