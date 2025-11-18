#include <stdio.h>

int main() {
    char name[50], address[100], customerID[20], month[20];
    int pincode;
    float amount;

    printf("Enter Name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter Address: ");
    fgets(address, sizeof(address), stdin);

    printf("Enter Customer ID: ");
    fgets(customerID, sizeof(customerID), stdin);

    printf("Enter Pin Code: ");
    scanf("%d", &pincode);

    printf("Enter Bill Amount: ");
    scanf("%f", &amount);

    printf("Enter Month of Bill: ");
    scanf("%s", month);

    printf("\n----- Electricity Bill Details -----\n");
    printf("Name: %s", name);
    printf("Address: %s", address);
    printf("Customer ID: %s", customerID);
    printf("Pin Code: %d\n", pincode);
    printf("Bill Amount: %.2f\n", amount);
    printf("Month: %s\n", month);

    return 0;
}
