#include <stdio.h>

int main() {
    int years;
    float rain, total = 0;
    int totalMonths = 0;

    printf("Enter number of years: ");
    scanf("%d", &years);

    for (int y = 1; y <= years; y++) {
        printf("\nYear %d:\n", y);

        for (int m = 1; m <= 12; m++) {
            printf("Enter rainfall for month %d: ", m);
            scanf("%f", &rain);

            total += rain;
            totalMonths++;
        }
    }

    printf("\nTotal months = %d\n", totalMonths);
    printf("Total rainfall = %.2f inches\n", total);
    printf("Average rainfall per month = %.2f inches\n", total / totalMonths);

    return 0;
}
