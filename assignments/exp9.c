#include <stdio.h>
#include <string.h>

int main() {
    char c1[20], c2[20];

    printf("Enter first primary color: ");
    scanf("%s", c1);

    printf("Enter second primary color: ");
    scanf("%s", c2);

    // check if colors are valid primary colors
    int valid1 = (!strcmp(c1, "red") || !strcmp(c1, "blue") || !strcmp(c1, "yellow"));
    int valid2 = (!strcmp(c2, "red") || !strcmp(c2, "blue") || !strcmp(c2, "yellow"));

    if (!valid1 || !valid2) {
        printf("Error: Invalid primary color entered.\n");
        return 0;
    }

    if ((!strcmp(c1, "red") && !strcmp(c2, "blue")) ||
        (!strcmp(c1, "blue") && !strcmp(c2, "red"))) {
        printf("Result: purple\n");
    }
    else if ((!strcmp(c1, "red") && !strcmp(c2, "yellow")) ||
             (!strcmp(c1, "yellow") && !strcmp(c2, "red"))) {
        printf("Result: orange\n");
    }
    else if ((!strcmp(c1, "blue") && !strcmp(c2, "yellow")) ||
             (!strcmp(c1, "yellow") && !strcmp(c2, "blue"))) {
        printf("Result: green\n");
    }
    else {
        printf("Both colors are same — no secondary color.\n");
    }

    return 0;
}
