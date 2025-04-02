#include <stdio.h>
int main() {
    float weight, converted;
    char unit;
    printf("Enter your weight: ");
    scanf("%f", &weight);
    printf("(K)g or (L)bs: ");
    scanf(" %c", &unit);
    if (unit == 'K' || unit == 'k') {
        converted = weight * 2.20462;
        printf("Your weight in pounds is %.2f\n", converted);
    } else if (unit == 'L' || unit == 'l') {
        converted = weight / 2.20462;
        printf("Your weight in kilograms is %.2f\n", converted);
    } else {
        printf("Invalid unit\n");
    }
    printf("Thank you!\n");
    return 0;
}