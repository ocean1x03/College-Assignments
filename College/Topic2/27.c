#include <stdio.h>

char next_char(char ch, int offset) {
    return 'A' + (ch - 'A' + offset) % 26;
}

int main() {
    char start;
    printf("Enter the starting character (A–Z): ");
    scanf(" %c", &start);  // space before %c to consume any leftover newline

    // Line 1
    printf("%c\n", start);

    // Line 2
    printf("%c%c\n", next_char(start, 1), next_char(start, 2));

    // Line 3
    printf("%c%c%c%c\n", next_char(start, 3), next_char(start, 4), next_char(start, 5), next_char(start, 6));

    // Line 4 (reverse of previous 4)
    printf("%c%c%c\n", next_char(start, 6), next_char(start, 5), next_char(start, 4));

    // Line 5
    printf("%c%c\n", next_char(start, 2), next_char(start, 1));

    // Line 6
    printf("%c\n", start);

    return 0;
}
