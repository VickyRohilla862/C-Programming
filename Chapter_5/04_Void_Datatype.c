/*
This datatype is used in the C program if we don't want to return any value.

If we want to return a value, we use "int"
*/

// example:
#include <stdio.h>
void sum(int, int);    // this function doesn't return anything!

void sum(int x, int y){
    printf("The sum of two numbers is %d", x+y);
}
int main(){
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    sum(a, b);
    return 0;
}