/*
Copyright (c) 2022 Shahibur Rahaman
Licensed under MIT license

Q.|> WAP to accept temperature in celsius scale and show the value in...
     fahrenheit scale.

Compiler: MSVC
*/

#include <stdio.h>

int main(void)
{
    float c, f;

    printf("Temperature in Celsius: ");
    scanf("%f", &c);

    f = ((9.0 / 5.0) * c) + 32;

    printf("%.2f Celsius = %.2f Fahrenheit\n", c, f);

    return 0;
}