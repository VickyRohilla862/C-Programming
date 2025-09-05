//An entity whose values does not change is called Constant.

//A variable is an entity whose values can be changed.

//Primarily, there are three types of constants:
// 1, 2, 6, 7, 9 -> Integer constant
// 322.1, 2.5, 7.0 -> Real or Float constants
// 'a', '$', '@' -> Character constants (Must be enclosed in single inverted commas)

/*
syntax: 
    const data_type variable_name = value;
*/
//example:
#include <stdio.h>
int main(){
    const int a = 6; //this value cannot be changed 
    printf("The value of a is %d", a);
    return 0;
}

//If we try to change the value, the program will not run or throw an error.