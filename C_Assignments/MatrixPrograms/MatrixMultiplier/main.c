/*
Copyright (c) 2022 Shahibur Rahaman
Licensed under MIT license

Q.|> WAP to accept input for two matrices and show their output after...
     multiplication.

Compiler: MSVC
*/

#include <stdio.h>

int main(void)
{
    int matrix_a[3][3] = {0};
    int matrix_b[3][3] = {0};
    int matrix_c[3][3] = {0};

    int i, j, c = 1;

    for (i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrix_a[i][j] = c;
            c++;
        }
    }

    c = 1;

    for (i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrix_b[i][j] = c + 10;
            c++;
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix_a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix_b[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            int sum_of_product = 0;
            for (int k = 0; k < 3; k++)
            {
                sum_of_product += matrix_a[i][k] * matrix_b[k][j];
            }
            matrix_c[i][j] = sum_of_product;
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix_c[i][j]);
        }
        printf("\n");
    }


    return 0;
}