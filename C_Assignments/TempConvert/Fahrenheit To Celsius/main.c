/*
Copyright (c) 2022 Shahibur Rahaman
Licensed under MIT license

Q.|> WAP to accept temperature in fahrenheit scale and show the value in...
     celsius scale.

Compiler: MSVC
*/

#include <stdio.h>

int main(void)
{
    float f, c;

    printf("Temperature in Fahrenheit: ");
    scanf("%f", &f);

    c = (5.0 / 9.0) * (f - 32);

    printf("%.2f Fahrenheit = %.2f Celsius\n", f, c);

    return 0;
}