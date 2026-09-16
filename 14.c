//Program 5 — E-Commerce Product Price Sorting An e-commerce company has a list of N product prices. Write a program to arrange the product prices from lowest to highest in ascending order.

#include <stdio.h>

int main()
{
    int a[100], n, i, j, temp;

    printf("Enter number of products: ");
    scanf("%d", &n);

    printf("Enter product prices:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Prices in ascending order:\n");

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}