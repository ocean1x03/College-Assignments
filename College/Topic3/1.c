#include <stdio.h>

void primeFactors(int n, int i) {
    if (i > n) return;
    if (n % i == 0) {
        printf("%d ", i);
        primeFactors(n / i, i);
    } else {
        primeFactors(n, i + 1);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    primeFactors(n, 2);
    return 0;
}
