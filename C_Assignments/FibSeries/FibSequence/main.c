/*
Copyright (c) 2022 Shahibur Rahaman
Licensed under MIT license

Q.|> WAP to show the fibonacci sequence from 1st term to nth term.

Compiler: MSVC
*/

#include <stdio.h>

int main(void)
{
    int i, n, prev_num = 0, curr_num = 1, next_num;

    printf("Number: ");
    scanf("%d", &n);

    printf("%d %d ", prev_num, curr_num);
    
    for (i = 3; i <= n; i++)
    {
        next_num = prev_num + curr_num;
        printf("%d ", next_num);
        if (i == n)
        {
            break;
        }
        prev_num = curr_num;
        curr_num = next_num;
    }
    printf("\n");

    return 0;
}
