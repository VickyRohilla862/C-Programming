#include <stdio.h>
float C2F(float);

float C2F(float celsius){
    float fahrenheit;
    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    return fahrenheit;
}
int main(){
    float celsius;
    printf("Enter temperature in celsius: ");
    scanf("%f", &celsius);
    printf("The temperature in fahrenheit is %.2f", C2F(celsius));
    return 0;
}