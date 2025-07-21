#include <stdio.h>
int main() {
    int l, b, area, perimeter;
    printf("Enter length and breadth: ");
    scanf("%d%d", &l, &b);
    area = l * b;
    perimeter = 2 * (l + b);
    if (area > perimeter)
        printf("Area is greater than perimeter\n");
    else
        printf("Area is not greater than perimeter\n");
    return 0;
}
