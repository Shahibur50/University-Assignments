/*
Copyright (c) 2022 Shahibur Rahaman
Licensed under MIT license

Q.|> WAP to accept time in seconds and convert it into hours, minutes, and...
     seconds format.

Compiler: MSVC
*/

#include <stdio.h>

int main(void)
{
    int h, m, s;

    printf("\n| Time Converter |\n");
    
    printf("\nTime in seconds: ");
    scanf("%d", &s);

    h = s / 3600;
    s = s % 3600;

    m = s / 60;
    s = s % 60;

    printf("\n%d Hour(s) : %d Minute(s) : %d Second(s)\n", h, m, s);

    return 0;
}