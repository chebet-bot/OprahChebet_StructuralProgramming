// Task 2: Surface Area of a Sphere
#include <stdio.h>

int main() {
    double radius, area;
    printf("Enter the radius of the sphere: ");
    scanf("%lf", &radius);

    area = 4 * 3.14159 * radius * radius;
    printf("Surface area: %.2f\n", area);
    return 0;
}
