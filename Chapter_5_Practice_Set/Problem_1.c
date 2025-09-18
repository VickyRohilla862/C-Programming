#include <stdio.h>
float Avg(int, int, int);
float Avg(int a, int b, int c){
    int average = (a+b+c)/3;
    return average;
}
int main(){
    int a, b, c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);
    printf("The Average of %d, %d and %d is %.2f", a, b, c, Avg(a, b, c));
    return 0;
}