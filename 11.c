//Program 2 — Hospital Emergency Monitoring A hospital records the number of patients arriving in its emergency department during N consecutive hours. Determine: 1. The maximum number of patients and the hour when it occurred. 2. The minimum number of patients. 3. The peak hour. 4. The number of hours whose patient count is above the average.

#include <stdio.h>

int main()
{
    int a[100], n, i;
    int max, min, maxHour, count = 0;
    float sum = 0, average;

    printf("Enter number of hours: ");
    scanf("%d", &n);

    printf("Enter number of patients for each hour:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    max = a[0];
    min = a[0];
    maxHour = 1;

    for(i = 1; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
            maxHour = i + 1;
        }

        if(a[i] < min)
            min = a[i];
    }

    average = sum / n;

    for(i = 0; i < n; i++)
    {
        if(a[i] > average)
            count++;
    }

    printf("\nMaximum patients = %d", max);
    printf("\nHour = %d", maxHour);
    printf("\nMinimum patients = %d", min);
    printf("\nPeak hour = %d", maxHour);
    printf("\nAverage patients = %.2f", average);
    printf("\nHours above average = %d", count);

    return 0;
}