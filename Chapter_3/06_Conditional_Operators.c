// A shorthand "if-else" can be written using the conditional or ternary operators.
/*
syntax:
    condition ? expression-if-true : expression-if-false;
*/
// Here "?" and ":" are called Ternary operators.

// example:
#include <stdio.h>
int main(){
    int age;
    printf("Enter the age to verify: ");
    scanf("%d", &age);
    age>=18 ? printf("You are eligible to drive\n") : printf("You can't drive because you are below of age 18.\n");
    return 0;
}

// here if the age is greater than or equal to 18, than the user is eligible to drive a vehicle. Otherwise, the user should be atleast 18.
