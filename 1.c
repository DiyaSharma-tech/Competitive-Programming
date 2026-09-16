//wap in c to find the memory address of an element in 1D array

#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int i;

    printf("Enter the index: ");
    scanf("%d", &i);

    printf("Element = %d\n", a[i]);
    printf("Address = %p", &a[i]);

    return 0;
}