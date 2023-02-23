#include <stdio.h>
int main()
{
    float area, radius;
    printf("Enter circle radius: ");
    scanf("%f", &radius);
    area = 3.14159265359 * (radius * radius);
    printf("radius of a circle: %.2f", area);
    return 0;
}