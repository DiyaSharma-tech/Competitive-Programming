//write a c programme to find effictive adress of an element of a 2d array using row major order

#include <stdio.h>

int main()
{
    int a[3][4];
    int base, i, j, address;
    int size = sizeof(int);

    printf("Enter base address: ");
    scanf("%d", &base);

    printf("Enter row index: ");
    scanf("%d", &i);

    printf("Enter column index: ");
    scanf("%d", &j);

    address = base + ((i * 4 + j) * size);

    printf("Effective Address = %d", address);

    return 0;
}
