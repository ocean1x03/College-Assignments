#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three angles of a triangle: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a + b + c == 180)
        printf("Valid triangle\n");
    else
        printf("Invalid triangle\n");
    return 0;
}
