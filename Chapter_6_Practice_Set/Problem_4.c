#include <stdio.h>

int addition(int*, int*);

int main(){
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    addition(&a, &b);
    return 0;
}

int addition(int *x, int *y){
    int sum = *x + *y;
    printf("The sum of %d and %d is %d", *x, *y, sum);
}