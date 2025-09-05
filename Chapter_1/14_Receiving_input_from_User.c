// In order to take input from the user and assign it to a variable, we use "scanf()" function.

//syntax:
//    scanf("data_type", &variable_name);

// "&" is thr "address of" operator and it means that the supplied values should be coppied to the address which is indecated by variable name.

//example:

#include <stdio.h>
int main(){
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("The value of a is %d", a);
    return 0;
}