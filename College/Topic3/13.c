#include <stdio.h>

int sumEvenOdd(int a, int b, int isEven) {
    if (a > b) return 0;
    if ((a % 2 == 0 && isEven) || (a % 2 != 0 && !isEven))
        return a + sumEvenOdd(a + 1, b, isEven);
    return sumEvenOdd(a + 1, b, isEven);
}

int main() {
    int a, b, type;
    scanf("%d %d %d", &a, &b, &type);
    printf("%d", sumEvenOdd(a, b, type));
    return 0;
}
