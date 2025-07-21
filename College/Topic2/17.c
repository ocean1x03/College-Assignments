#include <stdio.h>
int main() {
    int x, y, result = 1;
    printf("Enter base and exponent: ");
    scanf("%d%d", &x, &y);
    for (int i = 0; i < y; i++)
        result *= x;
    printf("%d^%d = %d\n", x, y, result);
    return 0;
}
