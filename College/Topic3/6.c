#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d, root1, root2;
    scanf("%lf %lf %lf", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("%.2lf %.2lf", root1, root2);
    } else if (d == 0) {
        root1 = -b / (2 * a);
        printf("%.2lf", root1);
    } else {
        printf("Imaginary roots");
    }
    return 0;
}
