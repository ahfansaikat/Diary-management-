#include <stdio.h>

int main(void) {
    int choice;
    double value, result;

    printf("1=C to F 2=km to mi 3=kg to lb\n");
    printf("Choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter Celsius: ");
            scanf("%lf", &value);
            result = value * 9.0 / 5.0 + 32.0;
            printf("%.2f C = %.2f F\n", value, result);
            break;
        case 2:
            printf("Enter kilometers: ");
            scanf("%lf", &value);
            result = value * 0.621371;
            printf("%.2f km = %.2f mi\n", value, result);
            break;
        case 3:
            printf("Enter kilograms: ");
            scanf("%lf", &value);
            result = value * 2.20462;
            printf("%.2f kg = %.2f lb\n", value, result);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
