/*
Copyright (c) 2022 Shahibur Rahaman
Licensed under MIT license

Q.|> WAP to accept input for a matrix and then show the matrix.

Compiler: MSVC
*/

#include <stdio.h>
#define ROWS 3
#define COLUMNS 3

int main(void)
{
    int matrix[ROWS][COLUMNS];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            printf("Value of ROW[%d] and column[%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("MATRIX:\n\n");
    for (int i = 0; i < ROWS; i++)
    {
        printf("| ");
        for (int j = 0; j < COLUMNS; j++)
        {
            printf("%d | ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}