#include <stdio.h>

void findMinMax(int arr[], int n, int i, int *min, int *max) {
    if (i == n) return;
    if (arr[i] < *min) *min = arr[i];
    if (arr[i] > *max) *max = arr[i];
    findMinMax(arr, n, i + 1, min, max);
}

int main() {
    int n, min = 1e9, max = -1e9;
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    findMinMax(arr, n, 0, &min, &max);
    printf("%d %d", min, max);
    return 0;
}
