#include <stdio.h>
#define PI 3.14159

int main(){
    float radius, height;
    float area, volume;
    printf("Enter the radius: ");
    scanf("%f", &radius);
    //area of circle
    area = PI * radius * radius;
    printf("The area of circle is %.2f\n", area);
    printf("Enter the height: ");
    scanf("%f", &height);
    volume = area * height;
    printf("The volume of cylinder is %.2f", volume);
    return 0;
}