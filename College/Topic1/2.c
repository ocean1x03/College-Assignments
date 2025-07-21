#include <stdio.h>

int main() {
    float km;
    printf("Enter distance between two cities (in km): ");
    scanf("%f", &km);

    printf("Meters: %.2f\n", km * 1000);
    printf("Feet: %.2f\n", km * 3280.84);
    printf("Inches: %.2f\n", km * 39370.1);
    printf("Centimeters: %.2f\n", km * 100000);
    return 0;
}
