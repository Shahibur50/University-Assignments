/*
Copyright (c) 2022 Shahibur Rahaman
Licensed under MIT license

Q.|> WAP to accept month number from the user (1-12) and then show number...
     of days belonging to that month.

Compiler: MSVC
*/

#include <stdio.h>

int main(void)
{
    int mnth, days[12] = {31, 28, 31, 30, 31, 30, 
                          31, 31, 30, 31, 30, 31};

    printf("Month [1-12]: ");
    scanf("%d", &mnth);

    mnth -= 1;

    switch (mnth)
    {
    case 0:
        printf("January month has %d days.", days[mnth]);
        break;
    case 1:
        printf("February month has %d days.\n", days[mnth]);
        printf("- February month also has 29 days in a leap year.");
        break;
    case 2:
        printf("March month has %d days.", days[mnth]);
        break;
    case 3:
        printf("April month has %d days.", days[mnth]);
        break;
    case 4:
        printf("May month has %d days.", days[mnth]);
        break;
    case 5:
        printf("June month has %d days.", days[mnth]);
        break;
    case 6:
        printf("July month has %d days.", days[mnth]);
        break;
    case 7:
        printf("August month has %d days.", days[mnth]);
        break;
    case 8:
        printf("September month has %d days.", days[mnth]);
        break;
    case 9:
        printf("October month has %d days.", days[mnth]);
        break;
    case 10:
        printf("November month has %d days.", days[mnth]);
        break;
    case 11:
        printf("December month has %d days.", days[mnth]);
        break;

    default:
        printf("Something went wrong!\n");
        break;
    }
    printf("\n");

    return 0;
}