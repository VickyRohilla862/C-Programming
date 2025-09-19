#include <stdio.h>
int main(){
    int i = 8;
    int *j = &i;
    printf("Address of i: %u\n", &i);// prints the address of i
    printf("Address of i: %u\n", j); // prints the address of i because j is holding the address of i
    printf("Address of j: %u\n", &j); // prints the address of j
    printf("value of i: %u\n", i); // prints the value of i
    printf("value of i: %u\n", *(&i)); // prints the value at the address of i
    printf("value of j: %u\n", *j); // prints the value at the address of j
    return 0;
}

/*
In my case, the output is:
    Address of i: 3936629244
    Address of i: 3936629244
    Address of j: 3936629232
    value of i: 8
    value of i: 8
    value of j: 8

But as we know, every time we run the program, the address of the variable changes
*/
/*
easy way to decode what the & operator and * operator prints is cancelling * by &. for example, in above code we have *(&i)
Cancel & and * so we will be left with i and we know the value of i is 8
another example:
we have *(&j). we know j is storing the address of i
so it will be *(&i). now if we cancel * by &, we will again get i whose value is 8.
*/
/*
If we create a float variable, than the pointer of that variable should also be float.
*/