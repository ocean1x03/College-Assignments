#include <stdio.h>
#include <math.h>

double fact(int n) {
    if (n <= 1) return 1;
    return n * fact(n - 1);
}

double sinx(double x, int term) {
    if (term > 13) return 0;
    double sign = term % 4 == 1 ? 1 : -1;
    return sign * pow(x, term) / fact(term) + sinx(x, term + 2);
}

int main() {
    double x;
    scanf("%lf", &x);
    printf("%.5lf", sinx(x, 1));
    return 0;
}
