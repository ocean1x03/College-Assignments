#include <stdio.h>

int main() {
    int num, first, last;
    printf("Enter a four-digit number: ");
    scanf("%d", &num);

    last = num % 10;
    while(num >= 10) {
        num /= 10;
    }
    first = num;

    printf("Sum of first and last digit = %d\n", first + last);
    return 0;
}
