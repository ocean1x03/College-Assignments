#include <stdio.h>
int main() {
    int i, hours, overtime;
    for (i = 1; i <= 10; i++) {
        printf("Enter hours worked for employee %d: ", i);
        scanf("%d", &hours);
        if (hours > 40)
            overtime = (hours - 40) * 12;
        else
            overtime = 0;
        printf("Overtime pay: Rs. %d\n", overtime);
    }
    return 0;
}
