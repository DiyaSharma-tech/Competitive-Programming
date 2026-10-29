#include <stdio.h>

int main() {
int n, i, target;
int arr[10000];
int low, high, mid, index = -1;

scanf("%d", &n);

for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
}

scanf("%d", &target);

low = 0;
high = n - 1;

while (low <= high) {
    mid = low + (high - low) / 2;

    if (arr[mid] == target) {
        index = mid;
        break;
    }
    else if (arr[mid] > target) {
        low = mid + 1;
    }
    else {
        high = mid - 1;
    }
}

printf("%d\n", index);

return 0;

}
