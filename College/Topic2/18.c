#include <stdio.h>
void printDigit(int d) {
    char *words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    printf("%s ", words[d]);
}

int main() {
    int num, rev = 0, temp;
    printf("Enter number (up to 6 digits): ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    while (rev > 0) {
        printDigit(rev % 10);
        rev /= 10;
    }
    return 0;
}
