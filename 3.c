//wap in c to find an effective address of an element of a 2D array using Row Major Order form in binary

#include <stdio.h>

int main()
{
    int base, size, row, col, ea;

    printf("Enter base address: ");
    scanf("%d", &base);

    printf("Enter size of element: ");
    scanf("%d", &size);

    printf("Enter row and column: ");
    scanf("%d %d", &row, &col);

    ea = base + ((row * 3) + col) * size;

    printf("Effective Address = %d\n", ea);

    printf("Effective Address in Binary = ");

    int b[20], i = 0;

    while(ea > 0)
    {
        b[i] = ea % 2;
        ea = ea / 2;
        i++;
    }

    for(i = i - 1; i >= 0; i--)
        printf("%d", b[i]);

    return 0;
}