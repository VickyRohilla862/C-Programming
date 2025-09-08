/* The if-else statement's syntax looks like:
    if(condition_to_be_checked){
        //Statements to be executed if the checked condition is true
    }else{
        //Statements to be executed if the checked condition is false
    }
*/

//example:

#include <stdio.h>
int main(){
    int age = 5;
    if(age>10){
        printf("We are inside if");
        printf("Your age is greater than 10");
    }else{
        printf("Your age is not greater than 10");
    }
    return 0;
}

//Output: Your age is not greater than 10

//If we change the age from 5 to 15 than the if block wil be true and the output will be:
/*
    We are inside if
    Your age is greater than 10
*/

//Note: Else block is not necessary but optional.
