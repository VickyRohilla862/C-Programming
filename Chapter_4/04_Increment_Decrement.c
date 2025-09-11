/*
Increment and Decrement operators are shorthand operators to add or subtract 1 from a variable
example:
    int i = 2; i = i+1;
we can write it as:
    int i = 2; i++;
Both works same
*/

/*
Increment operators are:
    1. i++ (prints i and increades i by 1)
    2. ++i (increases i by 1 and prints i)
*/

/*
Decrement Operators are:
    1. i-- (prints i and decreases i by 1)
    2. --i (decreases i by 1 and prints i)
*/

// example:
#include <stdio.h>
int main(){
    int i = 0;
    printf("i++ = %d\n", i++); // prints i and increases i by 1: prints 0 and change the value of i to 1
    printf("++i = %d\n", ++i); // increases i by 1 and prints i: increases i (1) by 1 (2) and prints i (2)
    printf("i-- = %d\n", i--); // prints i and decreases i by 1: prints 2 and change the value of i to 1
    printf("--i = %d\n", --i); // decreases i by 1 and prints i: decreases i (1) by 1 (0) and prints i (0)
    return 0;
}
/*
output:
    i++ = 0
    ++i = 2
    i-- = 2
    --i = 0
*/

// The output of:
#include <stdio.h>
int main(){
    int i = 0;
    i++; // increases i by 1. i = 1
    printf("i++ = %d\n", i); // prints i
    ++i; // increases i by 1. i = 2
    printf("++i = %d\n", i); // prints i
    i--; // decreases i by 1. i = 1
    printf("i-- = %d\n", i); // prints i
    --i; // decreases i by 1. i = 0
    printf("--i = %d\n", i); // prints i
    return 0;
}

/*
will be:
    i++ = 1
    ++i = 2
    i-- = 1
    --i = 0 
*/