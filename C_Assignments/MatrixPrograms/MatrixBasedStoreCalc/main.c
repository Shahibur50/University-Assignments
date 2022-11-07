/*
Copyright (c) 2022 Shahibur Rahaman
Licensed under MIT license

Q.|> WAP to show the sales of shops, either store-wise or department-wise for...
     the zonal manager.

Compiler: MSVC
*/

#include <stdio.h>
#include <string.h>
#define VERSION "0.0.1"
#define STORES 4
#define DEPARTMENTS 5

void take_input(void);
float sum_of_stores(int store_no);
float sum_of_depts(int dept_no);

float shops_data[STORES][DEPARTMENTS];

int main(void)
{
    printf("\nShops Manager\n");
    printf("Version %s\n\n", VERSION);

    take_input();

    int is_exit = 0;
    while (is_exit != 1)
    {
        char usr_input[10];
        printf("\nShopMan|> ");
        scanf("%s", &usr_input);
        printf("\n");

        if (strncmp("sum", usr_input, 3) == 0)
        {
            char sum_of;
            printf("SUM to be shown store or department wise [(S)/D]? ");
            scanf(" %c", &sum_of);

            int store_or_dept_no;
            if (sum_of == 'D')
            {
                printf("Department Number: ");
                scanf("%d", &store_or_dept_no);

                printf("Sum of all stores: %.2f\n", 
                        sum_of_depts(store_or_dept_no - 1));
            }
            else
            {
                printf("Store Number: ");
                scanf("%d", &store_or_dept_no);

                printf("Sum of all departments: %.2f\n", 
                        sum_of_stores(store_or_dept_no - 1));
            }
        }
        else if (strncmp("exit", usr_input, 4) == 0)
        {
            printf("\nExiting...\n");
            break;
        }
    }
}

float sum_of_stores(int store_no)
{
    float sum = 0.0;

    int i = store_no;
    for (int j = 0; j < DEPARTMENTS; j++)
    {
        sum += shops_data[i][j];
    }

    return sum;
}

float sum_of_depts(int dept_no)
{
    float sum = 0.0;

    int j = dept_no;
    for(int i = 0; i < STORES; i++)
    {
        sum += shops_data[i][j];
    }

    return sum;
}

void take_input(void)
{
    int i, j;

    for (i = 0; i < STORES; i++)
    {
        for (j = 0; j < DEPARTMENTS; j++)
        {
            printf("Sales for store no. %d having department no. %d: ",
                    i + 1, j + 1);
            scanf("%f", &shops_data[i][j]);
        }
    }
}