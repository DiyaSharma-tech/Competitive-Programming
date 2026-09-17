//write a c programme to find effictive adress of an element of a 2d array using row major order  form in binary
#include <stdio.h>

int main()
{
    int base, row, col;
    int columns = 4;
    int size = 4;
    int address;

    printf("Enter base address: ");
    scanf("%d", &base);

    printf("Enter row index: ");
    scanf("%d", &row);

    printf("Enter column index: ");
    scanf("%d", &col);

    address = base + ((row * columns + col) * size);

    printf("Effective Address in Decimal = %d\n", address);
    printf("Effective Address in Binary = ");

    for (int i = 31; i >= 0; i--)
    {
        printf("%d", (address >> i) & 1);
    }

    return 0;
}
