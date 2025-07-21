#include <stdio.h>

int main() {
    float m1, m2, m3, m4, m5, total, percentage;
    printf("Enter marks in 5 subjects: ");
    scanf("%f%f%f%f%f", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = (total / 500) * 100;

    printf("Total = %.2f, Percentage = %.2f%%\n", total, percentage);
    return 0;
}
