//wap in c to insertion and deletion of an element

#include <stdio.h>

int main()
{
    int a[10] = {10, 20, 30, 40, 50};
    int n = 5, pos, value, i;

    printf("Enter position for insertion: ");
    scanf("%d", &pos);

    printf("Enter value: ");
    scanf("%d", &value);

    for(i = n; i >= pos; i--)
        a[i] = a[i - 1];

    a[pos - 1] = value;
    n++;

    printf("After insertion: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\nEnter position for deletion: ");
    scanf("%d", &pos);

    for(i = pos - 1; i < n - 1; i++)
        a[i] = a[i + 1];

    n--;

    printf("After deletion: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}