#include <stdio.h>
int main() {
    int n, a = 0, b = 1, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n == 0 || n == 1) {
        printf("%d is a Fibonacci number.\n", n);
        return 0;
    }
    while (b < n) {
        temp = a + b;
        a = b;
        b = temp;
    }
    if (b == n)
        printf("%d is a Fibonacci number.\n", n);
    else
        printf("%d is not a Fibonacci number.\n", n);
    return 0;
}
