#include <stdio.h>
float force(float);
float force(float mass){
    float F, g = 9.8;
    F = mass * g;
    return F;
}
int main(){
    float mass;
    printf("Enter mass: ");
    scanf("%f", &mass);
    printf("Force for mass: %.2f is %.2f", mass, force(mass));
    return 0;
}