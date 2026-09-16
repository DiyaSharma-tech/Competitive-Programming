//Program 6 — Product Price Sorting Using Different TechniquesFor the same e-commerce product-price problem, sort the prices in ascending order using three different sorting techniques: 1. Bubble Sort 2. Selection Sort 3. Insertion Sort

#include <stdio.h>

int main()
{
    int a[100], b[100], c[100], d[100];
    int n, i, j, temp, min, key;

    printf("Enter number of products: ");
    scanf("%d", &n);

    printf("Enter product prices:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i];
        c[i] = a[i];
        d[i] = a[i];
    }

    /* Bubble Sort */
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(b[j] > b[j + 1])
            {
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }

    /* Selection Sort */
    for(i = 0; i < n - 1; i++)
    {
        min = i;

        for(j = i + 1; j < n; j++)
        {
            if(c[j] < c[min])
                min = j;
        }

        temp = c[i];
        c[i] = c[min];
        c[min] = temp;
    }

    /* Insertion Sort */
    for(i = 1; i < n; i++)
    {
        key = d[i];
        j = i - 1;

        while(j >= 0 && d[j] > key)
        {
            d[j + 1] = d[j];
            j--;
        }

        d[j + 1] = key;
    }

    printf("\nBubble Sort: ");
    for(i = 0; i < n; i++)
        printf("%d ", b[i]);

    printf("\nSelection Sort: ");
    for(i = 0; i < n; i++)
        printf("%d ", c[i]);

    printf("\nInsertion Sort: ");
    for(i = 0; i < n; i++)
        printf("%d ", d[i]);

    return 0;
}