#include <stdio.h>

int cubeSum(int n) {
    if (n == 0) return 0;
    int d = n % 10;
    return d * d * d + cubeSum(n / 10);
}

int main() {
    int i;
    for (i = 1; i <= 999; i++) {
        if (cubeSum(i) == i) printf("%d ", i);
    }
    return 0;
}
