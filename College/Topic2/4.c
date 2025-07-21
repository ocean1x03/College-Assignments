#include <stdio.h>

int main() {
    int year, day = 1; // 0: Monday, 1: Tuesday, ...
    printf("Enter the year: ");
    scanf("%d", &year);

    for (int y = 1900; y < year; y++) {
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
            day += 2; // Leap year
        else
            day += 1; // Normal year
    }

    day %= 7;

    char *days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    printf("1st Jan %d is a %s.\n", year, days[day]);

    return 0;
}
