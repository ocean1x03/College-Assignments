#include <stdio.h>
#define PI 3.1416

int main() {
    float r, area, perimeter;
    printf("Enter radius: ");
    scanf("%f", &r);

    area = PI * r * r;
    perimeter = 2 * PI * r;

    printf("Area = %.2f, Perimeter = %.2f\n", area, perimeter);
    return 0;
}
