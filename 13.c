//Program 4 — Library Book Code Validator A university library assigns each book a unique code in the format AAA-YYYY-NNN. Write a program to determine whether a given book code follows the required format, including: • 3 uppercase letters • A hyphen • 4 digits • A hyphen • 3 digits • Exact required length

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char code[20];
    int i, valid = 1;

    printf("Enter book code: ");
    scanf("%s", code);

    if(strlen(code) != 12)
        valid = 0;

    if(valid)
    {
        for(i = 0; i < 3; i++)
        {
            if(code[i] < 'A' || code[i] > 'Z')
                valid = 0;
        }

        if(code[3] != '-')
            valid = 0;

        for(i = 4; i < 8; i++)
        {
            if(code[i] < '0' || code[i] > '9')
                valid = 0;
        }

        if(code[8] != '-')
            valid = 0;

        for(i = 9; i < 12; i++)
        {
            if(code[i] < '0' || code[i] > '9')
                valid = 0;
        }
    }

    if(valid)
        printf("Valid book code");
    else
        printf("Invalid book code");

    return 0;
}