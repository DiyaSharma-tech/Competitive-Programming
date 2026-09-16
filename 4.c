//Binary Search 
#include <stdio.h>

int main()
{
    int a[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = 10, key;
    int low = 0, high = n - 1, mid;

    printf("Enter element to search: ");
    scanf("%d", &key);

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == key)
        {
            printf("Element found at position %d", mid + 1);
            return 0;
        }
        else if(a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("Element not found");

    return 0;
}