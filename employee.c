#include <stdio.h>

struct Employee {
    int emp_id;
    char name[50];
    char designation[50];
    float salary;
    char department[50];
};

int main() {
    int n;
    
    printf("Enter total number of employees: ");
    scanf("%d", &n);
    
    struct Employee e[n];
    
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d\n", i + 1);
        
        printf("Enter Employee ID: ");
        scanf("%d", &e[i].emp_id);
        
        printf("Enter Employee Name: ");
        scanf(" %[^\n]", e[i].name);
        
        printf("Enter Designation: ");
        scanf(" %[^\n]", e[i].designation);
        
        printf("Enter Department: ");
        scanf(" %[^\n]", e[i].department);
        
        printf("Enter Salary: ");
        scanf("%f", &e[i].salary);
    }
    
    printf("\nEmployee Details\n");
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Employee ID: %d\n", e[i].emp_id);
        printf("Name: %s\n", e[i].name);
        printf("Designation: %s\n", e[i].designation);
        printf("Department: %s\n", e[i].department);
        printf("Salary: %.2f\n", e[i].salary);
    }
    
    return 0;
}
