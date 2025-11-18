#include <stdio.h>

int main() {
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);
    printf("Area of Circle = %.2f\n", 3.14f * radius * radius);
    return 0;
}

int main() {
    float length, width;
    printf("Enter length and width: ");
    scanf("%f %f", &length, &width);
    printf("Area of Rectangle = %.2f\n", length * width);
    return 0;
}

int main() {
    float base, height;
    printf("Enter base and height: ");
    scanf("%f %f", &base, &height);
    printf("Area of Triangle = %.2f\n", 0.5f * base * height);
    return 0;
}


// comment the rest except the one not in use