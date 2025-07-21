#include <stdio.h>

int main() {
    int num, reverse = 0, original, digit;
    printf("Enter a 5-digit number: ");
    scanf("%d", &num);
    original = num;

    while (num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    printf("Reversed number: %d\n", reverse);
    if (reverse == original)
        printf("The number is a palindrome.\n");
    else
        printf("The number is not a palindrome.\n");

    return 0;
}
