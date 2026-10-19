#include <stdio.h>

int main(void) {
    char grade, sign;
    double points;

    printf("Enter grade: ");
    scanf(" %c%c", &grade, &sign);

    switch (grade) {
        case 'A':
            switch (sign) {
                case '-': points = 3.7; break;
                default:
                    if (sign == '\n' || sign == '\r') {
                        points = 4.0;
                    } else {
                        printf("Invalid grade.\n");
                        return 0;
                    }
            }
            break;
        case 'B':
            switch (sign) {
                case '+': points = 3.3; break;
                case '-': points = 2.7; break;
                default:
                    if (sign == '\n' || sign == '\r') points = 3.0;
                    else { printf("Invalid grade.\n"); return 0; }
            }
            break;
        case 'C':
            switch (sign) {
                case '+': points = 2.3; break;
                case '-': points = 1.7; break;
                default:
                    if (sign == '\n' || sign == '\r') points = 2.0;
                    else { printf("Invalid grade.\n"); return 0; }
            }
            break;
        case 'D':
            switch (sign) {
                case '+': points = 1.3; break;
                default:
                    if (sign == '\n' || sign == '\r') points = 1.0;
                    else { printf("Invalid grade.\n"); return 0; }
            }
            break;
        case 'F':
            if (sign == '\n' || sign == '\r') points = 0.0;
            else { printf("Invalid grade.\n"); return 0; }
            break;
        default:
            printf("Invalid grade.\n");
            return 0;
    }

    printf("Grade point: %.1f\n", points);
    return 0;
    to
}
