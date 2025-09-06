// celsius to fahrenheit
#include <stdio.h>
int main(){
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9.0/5.0)+32;
    printf("The temperature in Fahrenheit is %.2f\n", fahrenheit);
    return 0;
}