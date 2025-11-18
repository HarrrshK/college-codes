#include <stdio.h>

int main() {
    int classTotal[10] = {0};
    int id, classNum, score;
    int students;

    printf("Enter total number of students in the school: ");
    scanf("%d", &students);

    for (int i = 1; i <= students; i++) {
        printf("\nEnter Student ID: ");
        scanf("%d", &id);

        printf("Enter Classroom number (1-10): ");
        scanf("%d", &classNum);

        printf("Enter Score (0-100): ");
        scanf("%d", &score);

        classTotal[classNum - 1] += score;
    }

    printf("\n--- Total Points for Each Classroom ---\n");
    for (int i = 0; i < 10; i++) {
        printf("Classroom %d: %d points\n", i + 1, classTotal[i]);
    }

    return 0;
}
