#include <stdio.h>
#include <math.h>
int main(){
    int a;
    printf("Enter the sides: ");
    scanf("%d", &a);
    printf("The area of square with side %d is %.2f", a, pow(a, 2));  // can't use %d to print area because pow() function returns a double value.
    return 0;
}