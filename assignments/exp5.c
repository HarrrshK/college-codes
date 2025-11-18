#include <stdio.h>

int main() {
    long seconds;

    printf("Enter number of seconds: ");
    scanf("%ld", &seconds);

    if (seconds >= 60)
        printf("Minutes = %ld\n", seconds / 60);

    if (seconds >= 3600)
        printf("Hours = %ld\n", seconds / 3600);

    if (seconds >= 86400)
        printf("Days = %ld\n", seconds / 86400);

    return 0;
}
