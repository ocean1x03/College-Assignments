#include <stdio.h>
int main() {
    int num, digit, count = 0, temp;
    printf("Enter number and digit: ");
    scanf("%d%d", &num, &digit);
    temp = num;
    while (temp > 0) {
        if (temp % 10 == digit)
            count++;
        temp /= 10;
    }
    printf("Digit %d occurs %d times in %d\n", digit, count, num);
    return 0;
}
