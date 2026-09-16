//Program 3 — Student Name Search A university maintains a list of N student names. Given a name to search, determine whether the student exists and display their position. The program should support: 1. Case-sensitive search — "Priya" and "priya" are different. 2. Case-insensitive search — "Priya" and "priya" are considered the same.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char name[10][30], search[30];
    int n, i, found = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter student names:\n");
    for(i = 0; i < n; i++)
        scanf("%s", name[i]);

    printf("Enter name to search: ");
    scanf("%s", search);

    /* Case-sensitive search */
    for(i = 0; i < n; i++)
    {
        if(strcmp(name[i], search) == 0)
        {
            printf("\nCase-sensitive: Found at position %d", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("\nCase-sensitive: Not found");

    /* Case-insensitive search */
    found = 0;

    for(i = 0; i < n; i++)
    {
        char a[30], b[30];
        int j;

        strcpy(a, name[i]);
        strcpy(b, search);

        for(j = 0; a[j] != '\0'; j++)
            a[j] = tolower(a[j]);

        for(j = 0; b[j] != '\0'; j++)
            b[j] = tolower(b[j]);

        if(strcmp(a, b) == 0)
        {
            printf("\nCase-insensitive: Found at position %d", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("\nCase-insensitive: Not found");

    return 0;
}