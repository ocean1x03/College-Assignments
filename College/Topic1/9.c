#include <stdio.h>

int main() {
    int num;
    printf("Enter a five-digit number: ");
    scanf("%d", &num);

    printf("Remainder when divided by 3: %d\n", num % 3);
    return 0;
}
