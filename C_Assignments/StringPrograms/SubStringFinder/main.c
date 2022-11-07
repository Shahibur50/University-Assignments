/*
Copyright (c) 2022 Shahibur Rahaman
Licensed under MIT license

Q.|> WAP to accept a string and a substring and show whether or not the...
     the substring belongs to the string or not.

Compiler: MSVC
*/

#include <stdio.h>

int main(void)
{
    printf("\nSubstring Finder\n");

    char str[100];
    printf("String: ");
    gets(str);

    char sub_str[100];
    printf("Sub string: ");
    gets(sub_str);

    int i, j = 0;

    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == sub_str[j])
        {
            j += 1;
            if (j == strlen(sub_str))
            {
                printf("\nSub-string found in the string.\n");
                return 0;
            }
        }
        else 
        {
            j = 0;
        }
    }
    printf("\nSub-string does not exist in the string.\n");

    return 0;
}
