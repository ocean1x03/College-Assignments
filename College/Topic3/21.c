#include <stdio.h>

void display(int arr[], int n, int i) {
    if (i == n) return;
    printf("%d ", arr[i]);
    display(arr, n, i + 1);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    display(arr, n, 0);
    return 0;
}
