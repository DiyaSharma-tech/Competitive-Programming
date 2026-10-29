#include <stdio.h>

int main() {
    int n, i, id, result = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &id);
        result = result ^ id;
    }

    printf("%d\n", result);

    return 0;
}