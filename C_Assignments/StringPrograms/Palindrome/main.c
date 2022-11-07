/*
Copyright (c) 2022 Shahibur Rahaman
Licensed under MIT license

Q.|> WAP to accept a string and check whether or not it is a palindrome.

Compiler: MSVC
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("Palindrome checker\n");

    char str[100];
    printf("String: ");
    gets(str);

    int str_len = strlen(str);
    int i = 0, j = str_len - 1;
    for (i; i < str_len; i++, j--)
    {
        if (str[i] != str[j])
        {
            printf("Given string is not a palindrome.\n");
            
            return 0;
        }
    }
    printf("Given string is a palindrome.\n");
    
    return 0;
}