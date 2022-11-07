/*
Copyright (c) 2022 Shahibur Rahaman
Licensed under MIT license

Q.|> WAP to accept temperature in either celsius or fahrenheit scale and...
     show the value in fahrenheit or celsius scale respectively.

Compiler: MSVC
*/

#include <stdio.h>

void fahr_to_celsius(void);
void celsius_to_fahr(void);
void to_user(void);

int main(void)
{
    int cnvtyp, is_exit = 0;
    to_user();

    while (is_exit != 1)
    {
        printf("Temperature conversion type [1/2/3]: ");
        scanf("%d", &cnvtyp);

        if (cnvtyp == 1)
        {
            celsius_to_fahr();
        }
        else if (cnvtyp == 2)
        {
            fahr_to_celsius();
        }
        else
        {
            is_exit = 1;
        }
        printf("\n");
    }
    printf("Exited\n");
}

void fahr_to_celsius(void)
{
    float f, c;

    printf("\nTemperature in Fahrenheit: ");
    scanf("%f", &f);

    c = (5.0 / 9.0) * (f - 32);

    printf("%.2f Fahrenheit = %.2f Celsius\n", f, c);
}

void celsius_to_fahr(void)
{
    float c, f;

    printf("\nTemperature in Celsius: ");
    scanf("%f", &c);

    f = ((9.0 / 5.0) * c) + 32;

    printf("%.2f Celsius = %.2f Fahrenheit\n", c, f);
}

void to_user(void)
{
    printf("\nTemperature Converter\n");
    printf("Version 0.0.1\n");
    printf("This program comes with NO WARRANTY\n\n");
    printf("Copyright (c) 2022 Shahibur Rahaman\n\n");
    printf("Options for conversion:\n");
    printf(" - Celsius to Fahrenheit scale: [1]\n");
    printf(" - Fahrenheit to Celsius scale: [2]\n");
    printf(" - Exit the program: [3]\n\n");
}