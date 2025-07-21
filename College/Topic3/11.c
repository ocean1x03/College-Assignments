#include <stdio.h>

void printEvenOdd(int start, int end, int isEven) {
    if (start > end) return;
    if ((start % 2 == 0 && isEven) || (start % 2 != 0 && !isEven)) {
        printf("%d ", start);
    }
    printEvenOdd(start + 1, end, isEven);
}

int main() {
    int a, b, type;
    scanf("%d %d %d", &a, &b, &type);
    printEvenOdd(a, b, type);
    return 0;
}
