/*
Just like 'j' is pointing to 'i' or storing the address of 'i', we can have another variable 'k'(or any name) which can further store the address of 'j'. 
syntax:
    int **k;
    k = &j;

Check out the image 'Point_to_Point.png' for better understanding!!
We can even go further one level and create a variable 'l' of type int*** to store the address of 'k'.
We mostly use int* and sometimes i** in real world problems.
*/
// example:
#include <stdio.h>
int main(){
    int i = 34;
    int *j = &i;
    int **k = &j;
    printf("Address of i: %u\n", &i);
    printf("Address of j: %u\n", &j);
    printf("Address of k: %u\n", &k);
    printf("value of i: %d\n", i);
    printf("value of j: %d\n", *j);
    printf("value of k: %d\n", *(*k));
    return 0;
}

/*
In the above program k is having the value of j and j have to address of i so k will also hold the address of i. if we print *k, it will print the address of i. for example: if the address of i is 24535678, k will hold 24535678 and *k will print 24535678. so we printed *(*k). 
so:
    *(*k) = *(24535678) // value at address 24535678 that's 34
    now the program prints 34 instead of 24535678.
*/