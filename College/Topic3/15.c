#include <stdio.h>

int reverse(int n, int rev) {
    if (n == 0) return rev;
    return reverse(n / 10, rev * 10 + n % 10);
}

int main() {
    int n;
    scanf("%d", &n);
    int r = reverse(n, 0);
    if (r == n) printf("Yes");
    else printf("No");
    return 0;
}
