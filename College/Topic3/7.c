#include <stdio.h>

char toUpper(char ch) {
    return ch - 32;
}

int main() {
    char ch;
    scanf(" %c", &ch);
    printf("%c", toUpper(ch));
    return 0;
}
