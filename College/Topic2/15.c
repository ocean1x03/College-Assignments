#include <stdio.h>
int main() {
    int n, i;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i % 3 == 0)
            printf("Cube of %d = %d\n", i, i*i*i);
    }
    return 0;
}
