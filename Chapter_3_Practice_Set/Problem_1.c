// What will be the output of the following code?:
#include <stdio.h>
int main(){
    int a = 10;
    if(a = 11) // the condition returns a non-zero value
        printf("I am 11");
    else
        printf("I am not 18");
    return 0;
}

// since the condition in if block gives a non-zero value, the if statement becomes true and it executes all the statements in the if block
// So, the output of this code will be "I am 11"