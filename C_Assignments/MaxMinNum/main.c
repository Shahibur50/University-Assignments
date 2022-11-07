/*
Copyright (c) 2022 Shahibur Rahaman
Licensed under MIT license

Q.|> WAP to find the greatest and the smallest number among series of...
     n numbers given by the user.

Compiler: MSVC
*/

#include <stdio.h>

int main(void)
{
    int i, max_num, min_num, num, n_term, numbers[100];

    printf("No. of terms: ");
    scanf("%d", &n_term);
    
    for (i = 0; i < n_term; i++)
    {
        printf("Number [%d]: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    max_num = numbers[0];
    min_num = numbers[0];

    for (i = 1; i < n_term; i++)
    {
        if (max_num < numbers[i])
        {
            max_num = numbers[i];
        }

        if (min_num > numbers[i])
        {
            min_num = numbers[i];
        }
    }

    printf("\nGreatest number: %d\n", max_num);
    printf("\nSmallest number: %d\n", min_num);

    return 0;
}