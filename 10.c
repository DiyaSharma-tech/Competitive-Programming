//Program 1 — University Attendance Analysis A university stores the attendance percentage of N students in an array. The academic section wants to: 1. Count the students whose attendance is below a given threshold. 2. Identify the student with the lowest attendance and their position. 3. Calculate the average attendance.

#include <stdio.h>

int main()
{
    int a[100], n, i, threshold;
    int count = 0, min, pos;
    float sum = 0, avg;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter attendance percentages:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("Enter attendance threshold: ");
    scanf("%d", &threshold);

    for(i = 0; i < n; i++)
    {
        if(a[i] < threshold)
            count++;
    }

    min = a[0];
    pos = 0;

    for(i = 1; i < n; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
            pos = i;
        }
    }

    avg = sum / n;

    printf("\nStudents below threshold = %d", count);
    printf("\nLowest attendance = %d%%", min);
    printf("\nPosition = %d", pos + 1);
    printf("\nAverage attendance = %.2f%%", avg);

    return 0;
}