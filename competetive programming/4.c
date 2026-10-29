#include <stdio.h>

int main() {
int n, i, j, target;
int arr[10000];

scanf("%d", &n);

for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
}

scanf("%d", &target);

for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
        if (arr[i] + arr[j] == target) {
            printf("%d %d\n", i, j);
            return 0;
        }
    }
}

return 0;


}
