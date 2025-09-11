// Garbage Value: Garbage Value refers to an uninitialized or unpridictable value stored in a variable in C
//example:
#include <stdio.h>
int main(){
    int i = 0;
    do{
        printf("The value of i is %d\n"); // we are printing an integer value here but we arent specifying which variable we want to print.
        i++;
    }while(i < 4);
    return 0;
}

// in the above example, we will get a garbage value!

/*
output:
    The value of i is 1549576248
    The value of i is 1318650528
    The value of i is 1318650528
    The value of i is 1318650528  

here, 1549576248 and 1318650528 are garbage value!!
*/

