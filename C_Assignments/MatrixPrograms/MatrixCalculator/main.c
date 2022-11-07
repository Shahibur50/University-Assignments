/*
Copyright (c) 2022 Shahibur Rahaman
Licensed under MIT license

Q.|> WAP to accept input for matrix A and matrix B, and show the inputs of...
     both of the matrix, and perform both addition and subtraction on them.

Compiler: MSVC
*/

#include <stdio.h>
#define ROWS 10
#define COLUMNS 10

void repeat_char(char *letter, int n);
void matrix_printer(int matrix[ROWS][COLUMNS], int rows, int columns);
void add_matrix(int matrix_a[ROWS][COLUMNS], int matrix_b[ROWS][COLUMNS], int r, int c);
void sub_matrix(int matrix_a[ROWS][COLUMNS], int matrix_b[ROWS][COLUMNS], int r, int c);

int main(void)
{
    int matrix_a[ROWS][COLUMNS];
    int matrix_b[ROWS][COLUMNS];
    int mat_a_r = 0, mat_a_c = 0;
    int mat_b_r = 0, mat_b_c = 0 ;
    int i, j;

    printf("\n| Matrix calculator |\n\n");
    
    printf("+=======================+\n");
    printf("| INPUTS FOR MATRIX [A] |\n");
    printf("+=======================+\n");
    printf("\nSize of matrix A: [RxC] ");
    scanf("%dx%d", &mat_a_r, &mat_a_c);

    for (i = 0; i < mat_a_r; i++)
    {
        for (j = 0; j < mat_a_c; j++)
        {
            printf("\nValues for [%d] Row and [%d] Column: ", i + 1, j + 1);
            scanf("%d", &matrix_a[i][j]);
        }
    }

    printf("\n");

    printf("+=======================+\n");
    printf("| INPUTS FOR MATRIX [B] |\n");
    printf("+=======================+\n");
    printf("\nSize of matrix B: [RxC] ");
    scanf("%dx%d", &mat_b_r, &mat_b_c);

    for (i = 0; i < mat_b_r; i++)
    {
        for (j = 0; j < mat_b_c; j++)
        {
            printf("\nValues for [%d] Row and [%d] Column: ", i + 1, j + 1);
            scanf("%d", &matrix_b[i][j]);
        }
    }

    printf("\n");
    repeat_char("=", 45);
    printf("\n");

    printf("\n|-> MATRIX A <-|\n");
    printf("\n");
    matrix_printer(matrix_a, mat_a_r, mat_a_c);
    
    printf("\n|-> MATRIX B <-|\n");
    printf("\n");
    matrix_printer(matrix_b, mat_b_r, mat_b_c);
    printf("\n");

    printf("\n|-> Addition of A and B <-|\n");
    printf("\n");

    add_matrix(matrix_a, matrix_b, mat_a_r, mat_a_c);
    
    printf("\n|-> Subtraction of A and B <-|\n");
    printf("\n");
    sub_matrix(matrix_a, matrix_b, mat_a_r, mat_a_c);

    return 0;
}

void add_matrix(int matrix_a[10][10], int matrix_b[10][10], int r, int c)
{
   for (int i = 0; i < r; i++)
    {
        printf("| ");
        for (int j = 0; j < c; j++)
        {
            printf("%d | ", matrix_a[i][j] + matrix_b[i][j]);
        }
        printf("\n");
    } 
}

void sub_matrix(int matrix_a[10][10], int matrix_b[10][10], int r, int c)
{
   for (int i = 0; i < r; i++)
    {
        printf("| ");
        for (int j = 0; j < c; j++)
        {
            printf("%d | ", matrix_a[i][j] + (-matrix_b[i][j]));
        }
        printf("\n");
    } 
}

void matrix_printer(int matrix[10][10], int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        printf("| ");
        for (int j = 0; j < columns; j++)
        {
            printf("%d | ", matrix[i][j]);
        }
        printf("\n");
    }
}

void repeat_char(char *letter, int n)
{
    for(int i = 0; i < n; i++)    
    {
        printf("%s", letter);
    }
}