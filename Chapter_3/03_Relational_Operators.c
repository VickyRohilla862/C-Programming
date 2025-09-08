/*
Relational Operators are used to evaluate conditions (true or false) inside the if statement.

Some examples of relational operators are:
    == (double equal to), >= (greater than or equal to), <= (Smaller than or equal to), < (smaller than), > (greater than), != (Not equal to)

Note: 
    '=' is used for assignment whereas '==' is used for equality check.

The condition can be any valid expression. In C, a non-zero value is considered to be true.
*/
//example:
#include <stdio.h>
int main(){
    if(2){
        printf("Valid\n");
    }
    if(345){
        printf("also Valid\n");
    }
    if("a"){
        printf("also Valid\n");
    }
    if(0){
        printf("Invalid\n");
    }
    return 0;
}

/*
Output:
    Valid
    also Valid
    also Valid
*/
//Invalid will not be printed because because the zero value is invalid and the program will not execute the zero values.
