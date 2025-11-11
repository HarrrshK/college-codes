#include <stdio.h>


struct Student {
    int roll_no, div;
    float percentage;
    char name[50];
    long int mobile_no;
}s1;

int main() {
    struct Student;  

    
    printf("Enter student name: ");
    scanf(" %[^\n]", s1.name); 
    printf("Enter roll number: ");
    scanf("%d", &s1.roll_no);

    printf("Enter division: ");
    scanf("%d", &s1.div);

    printf("Enter percentage: ");
    scanf("%f", &s1.percentage);

    printf("Enter mobile number: ");
    scanf("%ld", &s1.mobile_no);


    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.roll_no);
    printf("Division: %d\n", s1.div);
    printf("Percentage: %.2f\n", s1.percentage);
    printf("Mobile Number: %ld\n", s1.mobile_no);

    return 0;
}
