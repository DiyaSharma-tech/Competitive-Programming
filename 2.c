//wap in c to find an effective address of an element of a 2D array using Row Major Order form
//EA=Base+[(Row×Number of Columns)+Column]×Size

#include <stdio.h>

int main()
{
    int a[3][3];
    int i, j, base, size, add;

    printf("Enter base address: ");
    scanf("%d", &base);

    printf("Enter element size: ");
    scanf("%d", &size);

    printf("Enter row and column: ");
    scanf("%d %d", &i, &j);

    add = base + ((i * 3) + j) * size;

    printf("Effective Address = %d", add);

    return 0;
}