/*
A pointer is a variable which stores the address of another variable.
example: If i = 72, 72 is stored in RAM(Random Access Memory) at some location or address like 87994.
If we store the address of i to another variable then than another variable is called a pointer.

Pointer is like a bucket. We use bucket to store water, similarly, pointer is used to store the address of a variable.
Check the image "Pointer.png" for better understanding!!
If we want to get the address of a variable, we use '%p' to print and '&' (Address of) operator to get the address.
*/
// example:
#include <stdio.h>
int main(){
    int i = 48;
    printf("The address of i is %p\n", &i);
    return 0;
}
// Output: The address of i is {address of i}   // this address will be in octa-decimal from.
/*
The address of a variable isn't same. Every time we run the program, we get a new address allocated to the variable.

If we want to print the address in integer form, we use '%u" instead of '%p'.
%u is for unsigned integer variable.
*/
// We can also do:
#include <stdio.h>
int main(){
    int i = 48;
    int *j = &i;    // j stores address of i
    printf("The address of i is %p\n", &i);   // prints address of i
    printf("The address of i is %p\n", j);    // both print statements gives same output as j stores the address of i
    return 0;
}

/*
Output:
    The address of i is {address of i}
    The address of i is {address of i}
*/