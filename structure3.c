#include <stdio.h>

struct Student {
    int roll_no, div;
    float percentage;
    char name[50];
    long int mobile_no;
}s[3];

int main() {
    struct Student;  

    for (int i = 0; i < 3; i++) {
        printf("\nEnter details for student %d\n", i + 1);

        printf("Enter student name: ");
        scanf(" %[^\n]", s[i].name); 
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter division: ");
        scanf("%d", &s[i].div);

        printf("Enter percentage: ");
        scanf("%f", &s[i].percentage);

        printf("Enter mobile number: ");
        scanf("%ld", &s[i].mobile_no);
    }

    for (int i = 0; i < 3; i++) {
        printf("\n--- Student %d Details ---\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].roll_no);
        printf("Division: %d\n", s[i].div);
        printf("Percentage: %.2f\n", s[i].percentage);
        printf("Mobile Number: %ld\n", s[i].mobile_no);
    }

    return 0;
}
