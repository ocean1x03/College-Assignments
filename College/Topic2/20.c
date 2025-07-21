#include <stdio.h>
int main() {
    float time;
    printf("Enter time taken (in hours): ");
    scanf("%f", &time);
    if (time >= 2 && time < 3)
        printf("Highly efficient\n");
    else if (time >= 3 && time < 4)
        printf("Improve speed\n");
    else if (time >= 4 && time <= 5)
        printf("Training required\n");
    else
        printf("Leave the company\n");
    return 0;
}
